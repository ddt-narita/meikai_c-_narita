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
	}while(d < 1 || 31 < d);

	x.year_set(y);		//セッターのメンバ関数を呼び出して年を設定する
	x.month_set(m);		//セッターのメンバ関数を呼び出して月を設定する
	x.day_set(d);		//セッターのメンバ関数を呼び出して日を設定する

	return s;			//入力ストリームsを返却
}

