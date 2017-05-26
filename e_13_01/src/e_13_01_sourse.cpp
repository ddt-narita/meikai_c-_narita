#include<ctime>
#include<sstream>
#include<iostream>
#include"e_13_01.h"

using namespace std;

//閏年を含めないその月の最大の日の配列
int Date::dayMax[] = {31,28,31,30,31,30,31,31,30,31,30,31};

//閏年を含めその年月の最大の日にちを返却する関数
int Date::days_of_month(int x,int y)
{
	return dayMax[y - 1] + (leap_year(x) && y == 2);
}

//その日の日付で初期化されるデフォルトコンストラクタ
Date::Date()
{
	time_t current = time(NULL);
	struct tm* local = localtime(&current);

	y = local->tm_year + 1900;
	m = local->tm_mon + 1;
	d = local->tm_mday;
}

//コンストラクタの定義
Date::Date(int yy, int mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
}


//その年の経過日数を表示する関数
int Date::day_of_year()const
{
	//そのオブジェクトの日にちデータで初期化
	int days = d;
	//1月からその月まで繰り返す
	for(int i = 1; i < m; i++) {
		//その月の最大日を足す
		days += days_of_month(y,i);
	}
	//経過日数を返却
	return days;
}

//前日を返却する関数
Date Date::preceding_day() const
{
	//そのオブジェクトのデータで初期化
	Date temp = *this;

	//日にちが1より大きい時
	if(temp.d > 1) {
		temp.d--;
	//1日の時
	} else {
		//1減らして1より小さくなる月の時1年戻して月を12月にセット
		if(--temp.m < 1) {
			temp.y--;
			temp.m = 12;
		}
		//1月以外は最大の日にセット
		temp.d = days_of_month(temp.y, temp.m);
	}
	//
	return temp;
}

//次の日を返却する関数
Date Date::following_day() const
{
	//その時のオブジェクトのデータで初期化
	Date temp = *this;

	//日にちがその月の最大の日より小さいときはそのままインクリメント
	if(temp.d < days_of_month(temp.y, temp.m)) {
		temp.d++;
	//最大の日のとき
	} else {
		//1月増やして12月より大きいなら一年増やして月を1月にリセット
		if(++temp.m > 12) {
			temp.y++;
			temp.m = 1;
		}
		//12月以外は日を1日にセット
		temp.d = 1;
	}
	//出来たオブジェクトを返却
	return temp;
}

string Date::to_string() const
{
	//オブジェクトの年月日を文字列表現にして返却
	ostringstream s;
	s << y << "年" << m << "月" << d << "日";
	return s.str();
}

//その日の曜日を返却する関数
int Date::day_of_week() const
{
	int yy = y;
	int mm = m;
	if(mm == 1 || mm == 2) {
		yy--;
		mm += 12;
	}
	//曜日に相当する値を返却
	return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

//挿入子の多重定義
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}

istream& operator>>(istream& s, Date& x)
{
	int y;		//年を入力するための変数
	int m;		//月を入力するための変数
	int d;		//日にちを入力するための変数
	do {
		//年に入力を促す
		std::cout << "年：";
		//キーボードから入力
		s >> y;
	}while(y < 0 || 3000 < y);

	do{
		//月に入力を促す
		std::cout << "月：";
		//キーボードから入力
		s >> m;
	}while(m < 1 || 12 < m);

	do{
		//日に入力を促す
		std::cout << "日：";
		//キーボードから入力
		s >> d;
	}while(d < 1 || x.days_of_month2(y,m) < d);

	x.year_set(y);		//セッターのメンバ関数を呼び出して年を設定する
	x.month_set(m);		//セッターのメンバ関数を呼び出して月を設定する
	x.day_set(d);		//セッターのメンバ関数を呼び出して日を設定する

	return s;			//入力ストリームsを返却
}

//後者のオブジェクトのほうが大きいかをbool型で返却する演算子関数
bool operator< (const Date& x, const Date& y) {
	int nReturn;	//返却値
	//年がｙのほうが大きいとき
	if(x.y < y.y){
		nReturn = 1;
		//年がyのほうが小さいとき
	} else if(x.y > y.y) {
		nReturn = 0;
		//年が同じとき
	} else {
		//月がyのほうが大きいとき
		if(x.m < y.m){
			nReturn = 1;
			//月がyのほうが小さいとき
		} else if(x.m > y.m) {
			nReturn = 0;
			//月も同じとき
		} else {
			//日がyのほうが大きいとき
			if(x.d < y.d){
				nReturn = 1;
				//日まで同じかyのほうが小さいとき
			} else {
				nReturn = 0;
			}
		}
	}
	//返却
	return nReturn;
}


bool operator> (const Date& x, const Date& y) {
	int nReturn;	//返却値
	//年がxのほうが大きいとき
	if(x.y > y.y){
		nReturn = 1;
		//年がxのほうが小さいとき
	} else if(x.y < y.y) {
		nReturn = 0;
		//年が同じとき
	} else {
		//月がxのほうが大きいとき
		if(x.m > y.m){
			nReturn = 1;
			//月がxのほうが小さいとき
		} else if(x.m < y.m) {
			nReturn = 0;
			//月も同じとき
		} else {
			//日がxのほうが大きいとき
			if(x.d > y.d){
				nReturn = 1;
				//日まで同じかxのほうが小さいとき
			} else {
				nReturn = 0;
			}
		}
	}
	//返却
	return nReturn;
}

//上で定義した2つを使ってどちらかを満たすとき真をbool型で返却
bool operator<= (const Date& x, const Date& y) {
	return x < y || x == y;
}

//上で定義した2つを使ってどちらかを満たすとき真をbool型で返却
bool operator>= (const Date& x, const Date& y) {
	return x > y || x == y;
}

int operator-(const Date& x, const Date& y) {
	//返却する離れている日数
	int dayDif = 0;
	//大きいほう
	int y1 = x > y ? x.y : y.y;
	int m1 = x > y ? x.m : y.m;
	//小さいほう
	int y2 = x < y ? x.y : y.y;
	int m2 = x < y ? x.m : y.m;
	int d2 = x < y ?  y.d - x.d : x.d - y.d;

	//同値の時0を返却
	if(x == y) {
		dayDif = 0;
	//同値ではない時
	} else  {
		//小さいほうの日付が大きいほうと年と月が一致するまで繰り返す
		while(y2 < y1 || m2 < m1) {
			//その月の最大の日を足して代入
			dayDif += x.days_of_month2(y2,m2);
			//月が12月の時1月に戻して1年進める
			if(m2 == 12) {
				m2 = 1;
				y2++;
			//月が12月以外はそのまま1増やす
			} else {
				m2++;
			}
		}
		//日の差を足して日にちを調節する
		dayDif += d2;
	}
	//yのほうが大きいとき負の値にして返す仕様なのでー1掛ける
	if(x < y) {
		dayDif *= -1;
	}
	//求めた離れている日数を返却する
	return dayDif;

}

//前置増分演算子
Date& Date::operator++() {
	//オブジェクトに次の日を求める関数から返却された値を代入
	*this = following_day();
	//次の日のデータを返却する
	return *this;
}

//後置増分演算子
Date Date::operator++(int) {
	//インクリメントされる前のデータを避難
	Date DateReturn = *this;
	//その時のデータメンバを一日増やす
	++*this;
	//避難して置いたデータを返却
	return DateReturn;
}

//前置減分演算子
Date& Date::operator--() {
	//オブジェクトに前の日を求める関数から返却された値を代入
	*this = preceding_day();
	//前の日のデータを返却
	return *this;
}

//後置減分演算子
Date Date::operator --(int) {
	//デクリメントされる前のデータを避難
	Date DateReturn = *this;
	//デクリメントする
	--*this;
	//避難して置いたデータを返却
	return DateReturn;
}

//n日後を求める加算演算子
Date operator+(Date& x, int n) {
	//コピーインストラクタによってコピーオブジェクトを作る
	Date copy = x;

	copy.d += n;
	//足した後がその月の最大日より小さいとき
	if(copy.d <= Date::days_of_month(copy.y,copy.m)) {
		//引いた日にちが0より大きくなるまで繰り返す
		for(; copy.d < 0;) {
			//1月の時は12月の最大で足して12月にリセットして年を1年減らす
			if(copy.m == 1) {
				copy.d  += Date::days_of_month(copy.y,12);
				copy.m = 12;
				copy.y--;
			//1月以外はその前の月の最大で足して月を1つ減らす
			} else {
				copy.d  += Date::days_of_month(copy.y,copy.m - 1);
				copy.m--;
			}
		}
	//大きいとき
	} else {
		//足した後の日がその月の最大より小さくなるまで繰り返す
		for(; copy.d > Date::days_of_month(copy.y,copy.m);) {
			//12月の時は1年増やして月を1月にリセットして日をその月の最大で引く
			if(x.m == 12) {
				copy.d -= Date::days_of_month(copy.y,copy.m);
				copy.m =1;
				copy.y++;
				//12以外の月は最大の日で引いて月を1増やす
			} else {
				copy.d-= Date::days_of_month(copy.y,copy.m);
				copy.m++;
			}
		}
	}
	//出来た日付で作ったオブジェクトを返却
	return copy;
}

Date operator- (const Date& x, int n) {
		Date copy = x;
		copy.d -= n;

		//引いた後の日が0より大きいとき
		if(copy.d > 0) {
			//足した後の日がその月の最大より小さくなるまで繰り返す
			for(; copy.d > Date::days_of_month(copy.y,copy.m);) {
				//12月の時は1年増やして月を1月にリセットして日をその月の最大で引く
				if(copy.m == 12) {
					copy.d -= Date::days_of_month(copy.y,copy.m);
					copy.m =1;
					copy.y++;
					//12以外の月は最大の日で引いて月を1増やす
				} else {
					copy.d -= Date::days_of_month(copy.y,copy.m);
					copy.m++;
				}
			}
		//小さいとき
		} else {
			//引いた日にちが0より大きくなるまで繰り返す
			for(; copy.d < 0;) {
				//1月の時は12月の最大で足して12月にリセットして年を1年減らす
				if(copy.m == 1) {
					copy.d  += Date::days_of_month(copy.y,12);
					copy.m = 12;
					copy.y--;
				//1月以外はその前の月の最大で足して月を1つ減らす
				} else {
					copy.d += Date::days_of_month(copy.y,copy.m - 1);
					copy.m--;
				}
			}
		}
		//出来上がったデータで作ったオブジェクトを返却
		return Date(copy.y,copy.m,copy.d);
	}

