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

	//2つのオブジェクトのすべてのデータメンバを比較して一致するかbool型で返却
	friend bool operator== (const Date& x, const Date& y) {
		return x.y == y.y&& x.m == y.m&& x.d == y.d;
	}

	//2つのオブジェクトが一緒ではないかを上の演算子関数を使ってbool型で返却
	friend bool operator!= (const Date& x, const Date& y) {
		return !(x == y);
	}

	//後者のオブジェクトのほうが大きいかをbool型で返却する演算子関数
	friend bool operator< (const Date& x, const Date& y) {
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
		//bool型にキャストして返却
		return static_cast<bool>(nReturn);
	}


	friend bool operator> (const Date& x, const Date& y) {
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
		//bool型にキャストして返却
		return static_cast<bool>(nReturn);
	}

	//上で定義した2つを使ってどちらかを満たすとき真をbool型で返却
	friend bool operator<= (const Date& x, const Date& y) {
		return x < y || x == y;
	}

	//上で定義した2つを使ってどちらかを満たすとき真をbool型で返却
	friend bool operator>= (const Date& x, const Date& y) {
		return x > y || x == y;
	}

	//2つの日付の差、離れている日数を返す関数
	friend int operator-(const Date& x, const Date& y) {
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
				dayDif += days_of_month(y2,m2);
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
	Date& operator++() {
		//日がその月の最大日より小さいとき
		if(d < days_of_month(y, m)) {
			d++;
		//大きいとき
		} else {
			//1増やした月が12より大きいとき1年増やして月を1月にリセット
			if(++m < 12) {
				y++;
				m = 1;
			}
			//日にちを1日増やす
			d += 1;
		}
		//増やした後のオブジェクトを返却
		return *this;
	}


	//後置増分演算子
	Date operator++(int) {
		//インクリメントされる前のデータを避難
		Date DateReturn = *this;
		//その時のデータメンバを一日増やす
		++*this;
		//避難して置いたデータを返却
		return DateReturn;
	}


	//前置減分演算子
	Date& operator--() {
		//日のデータが1以上の時はそのままデクリメント
		if(d > 1) {
			d--;
		//1以下の時
		} else {
			//1減らした月が1より小さいとき
			if(--m < 1) {
				y--;		//1年減らして
				m = 12;		//月を12月にセット
			}
			//その月の最大の日にちにセット
			d = days_of_month(y, m);
		}
		//セット後のオブジェクトの参照を返却
		return *this;
	}


	//後置減分演算子
	Date operator--(int) {
		Date DateReturn = *this;
		--*this;
		return DateReturn;
	}

	//n日後を求める加算演算子
	friend Date operator+(Date& x, int n) {
		int y2 = x.y;	//オブジェクトの年で初期化
		int m2 = x.m;	//オブジェクトの月で初期化
		int d2 = x.d;	//オブジェクトの日で初期化
		int dayAfter = d2 + n;		//足した後の日にちの変数

		//足した後がその月の最大日より小さいとき
		if(dayAfter <= days_of_month(y2,m2)) {
			//そのまま用いる
			d2 = dayAfter;
		//大きいとき
		} else {
			//足した後の日がその月の最大より小さくなるまで繰り返す
			for(; dayAfter > days_of_month(y2,m2);) {
				//12月の時は1年増やして月を1月にリセットして日をその月の最大で引く
				if(m2 == 12) {
					dayAfter -= days_of_month(y2,m2);
					m2 =1;
					y2++;
				//12以外の月は最大の日で引いて月を1増やす
				} else {
					dayAfter -= days_of_month(y2,m2);
					m2++;
				}
			}
			//最大以下になったのを代入
			d2 = dayAfter;
		}
		//出来た日付で作ったオブジェクトを返却
		return Date(y2,m2,d2);
	}

	friend Date operator- (const Date& x, int n) {
		int y2 = x.y;		//その年で初期化
		int m2 = x.m;		//その月で初期化
		int d2 = x.d;		//その日にちで初期化
		int dayBefore = d2 - n;		//日を引いた後の変数を宣言

		//引いた後の日が0より大きいときはそのまま
		if(dayBefore > 0) {
			d2 = dayBefore;
		//小さいとき
		} else {
			//引いた日にちが0より大きくなるまで繰り返す
			for(; dayBefore < 0;) {
				//1月の時は12月の最大で足して12月にリセットして年を1年減らす
				if(m2 == 1) {
					dayBefore += days_of_month(y2,12);
					m2 = 12;
					y2--;
				//1月以外はその前の月の最大で足して月を1つ減らす
				} else {
					dayBefore +=days_of_month(y2,m2 - 1);
					m2--;
				}
			}
			//0よりい大きくなった時のものを代入
			d2 = dayBefore;
		}
		//出来上がったデータで作ったオブジェクトを返却
		return Date(y2,m2,d2);
	}


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
