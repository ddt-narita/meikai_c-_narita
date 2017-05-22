/* 演習11-04
 * コンストラクタの初期化しによって明示的に初期化しない場合にメイン部分オブジェクト
 * がデフォルトコンストラクタで初期化されることを確認する
 * 作成日：5月22日
 * 作成者：成田修之
 */

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<sstream>

class Date {

	int y;		//年に関するメンバ関数
	int m;		//月に関するメンバ関数
	int d;		//日に関するメンバ関数
public:

	//デフォルトコンストラクタの宣言
	Date()
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
	Date(int y, int m, int d)
	{
		this->y = y;	//引数でデータメンバを初期化
		this->m = m;	//引数でデータメンバを初期化
		this->d = d;	//引数でデータメンバを初期化
	}

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

	std::string to_string()const
	{
		//文字列の出力ストリームを宣言
		std::ostringstream s;
		//出力ストリームに年月日の表示を加えて返却
		s << y << "年" << m << "月" << d << "日";
		return s.str();
	}
};
//挿入子の多重定義
std::ostream& operator<<(std::ostream& s,const Date& x);


