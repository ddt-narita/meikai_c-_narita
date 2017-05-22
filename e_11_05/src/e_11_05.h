/* 演習11-05
 * 日付を読み込んでその曜日を求めて表示するプログラムの作成
 * 作成日：5月22日
 * 作成者：成田修之
 */

#ifndef ___Class_Date
#define ___Class_Date

#include<string>
#include<iostream>

class Date
{
	int y;		//年に関するデータメンバ
	int m;		//月に関するデータメンバ
	int d;		//日にちに関するデータメンバ
public:

	//デフォルトコンストラクタの宣言
	Date();

	//コンストラクタの宣言
	Date(int yy, int mm = 1,int dd = 1);

	//年を返却する関数の定義
	int year() const
	{
		//年に関するデータメンバを返却
		return y;
	}
	//月を返却する関数の定義
	int month() const
	{
		//月に関するデータメンバを返却
		return m;
	}
	//日にちを返却する関数の定義
	int day() const
	{
		//日にちを返却する
		return d;
	}
	//引数をデータメンバに代入するセッター
	void setYear(int n){
		//引数をデータメンバyに代入
		y = n;
	}
	//引数をデータメンバに代入するセッター
	void setMonth(int n) {
		//データメンバmに引数を代入
		m = n;
	}
	//引数をデータメンバに代入するセッター
	void setDay(int n) {
		//データメンバdに引数を代入
		d = n;
	}

	//前の日を返却する関数の宣言
	Date preceding_day() const;

	//その日付の曜日を返却する関数の宣言
	int day_of_week() const;

	//日付の文字列表示を返却する関数の宣言
	std::string to_string() const;
};
//挿入子の多重定義の宣言
std::ostream& operator<<(std::ostream& s, const Date& x);
//抽出子の多重定義の宣言
std::istream& operator>>(std::istream& s, Date& x);

//インクルードガードの終わり
#endif
