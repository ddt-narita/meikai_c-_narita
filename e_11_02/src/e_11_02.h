/* 演習11-02 ヘッダ部
 * クラスDate第2番に抽出子を追加
 * 作成日：5月19日
 * 作成者：成田修之
 */

#include<iostream>
#include<string>

class Date {

	int y;		//年に関するメンバ関数
	int m;		//月に関するメンバ関数
	int d;		//日に関するメンバ関数
public:

	//デフォルトコンストラクタの宣言
	Date();
	//コンストラクタの宣言
	Date(int y, int m, int d);

	//その年を返却するメンバ関数
	int year()const {
		return y;
	}
	//その月を返却するメンバ関数
	int month()const {
		return m;
	}
	//その日を返却するメンバ関数
	int day()const {
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

	Date preceding_day()const;		//前の日を表示するメンバ関数の宣言

	std::string to_string()const;		//クラスのデータメンバの表示を年月日でするようにするための関数
};

//挿入子の多重定義の宣言
std::ostream& operator<<(std::ostream& s, const Date& x);
//抽出子の多重定義の宣言
std::istream& operator>>(std::istream& s, Date& x);
