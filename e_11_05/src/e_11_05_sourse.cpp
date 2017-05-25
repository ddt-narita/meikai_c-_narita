/* 演習11-05
 * 日付を読み込んでその曜日を求めて表示するプログラムの作成
 * 作成日：5月22日
 * 作成者：成田修之
 */

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<sstream>
#include"e_11_05.h"

//デフォルトコンストラクタの宣言
Date::Date()
{
	//現在の時間で初期化した暦時刻time_t型の変数を宣言
	time_t current =time(NULL);
	//暦時刻を日本時間になるように変換
	struct tm* local = localtime(&current);

	y = local->tm_year+1900;	//日本時間の年を代入
	m = local->tm_mon +1;		//日本時間の月を代入
	d = local->tm_mday;			//日本時間の日を代入
}
//コンストラクタの宣言
Date::Date(int y, int m, int d)
{
	this->y = y;	//引数でデータメンバを初期化
	this->m = m;	//引数でデータメンバを初期化
	this->d = d;	//引数でデータメンバを初期化
}

Date Date::preceding_day() const
{
	//各月の最大日
	int dmax[] ={31,28,31,30,31,30,31,31,30,31,30,31};
	//所属するオブジェクト自身で初期化されたクラスDateのオブジェクトを作成
	Date temp = *this;

	//そのオブジェクトの日数が1より大きいとき
	if(temp.d >1){
		//日にちをデクリメントして1引く
		temp.d--;
	//日数が1より小さいとき
	}else {
		//その中でその月から1引いた月が1より小さいとき
		if(--temp.m < 1) {
			//一年戻って
			temp.y--;
			//12月にセットする
			temp.m = 12;
		}
		//日にちをその戻った月に合わせて最後の日に合わせる
		temp.d =dmax[temp.m - 1];
	}
	//そのオブジェクトを返却する
	return temp;
}

//その曜日に応じた整数を返却する関数の定義
int Date::day_of_week() const
{
	int yy = y;		//年に関するデータメンバで初期化
	int mm = m;		//月に関するデータメンバで初期化
	//その月が1月か2月の時
	if(mm == 1|| mm==2) {
		//年をデクリメントする
		yy--;
		//月に12足す
		mm += 12;
	}
	//曜日に応じた整数を返却
	return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

std::string Date::to_string()const
{
	//文字列の出力ストリームを宣言
	std::ostringstream s;
	//出力ストリームに年月日の表示を加えて返却
	s << y << "年" << m << "月" << d << "日";
	return s.str();
}

//挿入子の多重定義
std::ostream& operator<<(std::ostream& s,const Date& x)
{
	//クラスDateを出力するときメンバ関数to_stringを呼び出して年月日を表示
	return s << x.to_string();
}

//抽出子の多重定義
std::istream& operator>>(std::istream& s, Date& x)
{
	int y2;		//年をセットするメンバ関数の実印数
	int m2;		//月をセットするメンバ関数の実印数
	int d2;		//日をセットするメンバ関数の実印数
	do {
		//年に入力を促す
		std::cout << "年：";
		//キーボードから入力
		s >> y2;
	}while(y2 < 0 || 3000 < y2);

	do{
		//月に入力を促す
		std::cout << "月：";
		//キーボードから入力
		s >> m2;
	}while(m2 < 1 || 12 < m2);

	do{
		//日に入力を促す
		std::cout << "日：";
		//キーボードから入力
		s >> d2;
	}while(d2 < 1 || 31 < d2);

	x.setYear(y2);		//入力された年でメンバ関数を呼び出してセット
	x.setMonth(m2);		//入力された月でメンバ関数を呼び出してセット
	x.setDay(d2);		//入力された日でメンバ関数を呼び出してセット
	//入力ストリームを返却
	return s;

}

