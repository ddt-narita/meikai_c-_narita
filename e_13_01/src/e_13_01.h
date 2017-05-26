/* 演習13-01
 * 日付クラス第4版に各種演算子関数の追加
 * 作成日：5月24日
 * 作成者：成田修之
 */

//インクルードガード
#ifndef ___Class_Date
#define ___Class_Date

#include<string>
#include<iostream>

class Date {
	int y;		//西暦年のデータメンバ
	int m;		//月のデータメンバ
	int d;		//日のデータメンバ

	//任意の月の最大の日を求めるための配列
	static int dayMax[];

	//その年と月の最大の日を求める関数
	static int days_of_month(int y, int m);

public:

	//デフォルトコンストラクタの宣言
	Date();
	//コンストラクタの宣言
	Date(int yy, int mm, int dd);

	//任意の年がうるう年か判定する静的関数
	static bool leap_year(int year) {
		//うるう年かどうかbool型で返却
		return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	}

	//年を返却するゲッター
	int year() const {
		return y;
	}
	//月を返却するゲッター
	int month() const {
		return m;
	}
	//日を返却するゲッター
	int day() {
		return d;
	}
	//そのオブジェクトの年を静的メンバ関数leap_yearを呼び出してbool型で返却
	bool leap_year() const {
		return leap_year();
	}
	//そのオブジェクトに入力された日付の前日を返却するDate型関数
	Date preceding_day() const;

	//そのオブジェクトに入力された日付の翌日を返却するDate型関数
	Date following_day() const;

	//そのオブジェクトの年内の経過日数を返却する関数
	int day_of_year() const;

	//そのオブジェクトの曜日を返却する関数
	int day_of_week() const;

	//オブジェクトを年月日の文字列表現して返却する関数
	std::string to_string() const;

	//年に関するセッター
	void year_set(int y2) {
		y = y2;
	}
	//月に関するセッター
	void month_set(int m2) {
		m = m2;
	}
	//日に関するセッター
	void day_set(int d2) {
		d = d2;
	}

	int days_of_month2 (int x, int y) const {
		int a = days_of_month(x,y);
		return a;
	}

	//2つのオブジェクトのすべてのデータメンバを比較して一致するかbool型で返却
	friend bool operator== (const Date& x, const Date& y) {
		return x.y == y.y&& x.m == y.m&& x.d == y.d;
	}

	//2つのオブジェクトが一緒ではないかを上の演算子関数を使ってbool型で返却
	friend bool operator!= (const Date& x, const Date& y) {
		return !(x == y);
	}

	//後者のオブジェクトのほうが大きいかをbool型で返却する演算子関数
	friend bool operator< (const Date& x, const Date& y);

	//後者のオブジェクトのほうが小さいかをbool型で返却する演算子関数
	friend bool operator> (const Date& x, const Date& y);


	//上で定義した2つを使ってどちらかを満たすとき真をbool型で返却
	friend bool operator<= (const Date& x, const Date& y);

	//上で定義した2つを使ってどちらかを満たすとき真をbool型で返却
	friend bool operator>= (const Date& x, const Date& y);

	//2つの日付の差、離れている日数を返す関数
	friend int operator-(const Date& x, const Date& y);

	//前置増分演算子
	Date& operator++();

	//後置増分演算子
	Date operator++(int);

	//前置減分演算子
	Date& operator--();


	//後置減分演算子
	Date operator--(int);

	//n日後を求める加算演算子
	friend Date operator+(Date& x, int n);

	//n日前を求める減算演算子
	friend Date operator- (const Date& x, int n);

	//上で求めた演算子を使ってそれで代入する
	friend void operator+=( Date& x, int n) {
		x = x + n;
	}

	//上で求めた演算子を使ってそれで代入する
	friend void operator-=( Date& x, int n) {
		x = x - n;
	}

};

//挿入子の多重定義の宣言
std::ostream& operator<<(std::ostream& s, const Date& x);

//抽出子の多重定義の宣言
std::istream& operator>>(std::istream& s, Date& x);

//インクルードガードの終わり
#endif
