/* 演習11-07
 * 自動車クラスCarに購入年月日を格納するデータメンバとその値を返却するメンバ関数の作成
 * 作成日：5月22日
 * 作成者：成田修之
 */

//インクルードガード
#ifndef ___Class_Date
#define ___Class_Date

#include<string>
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<sstream>

class Date
{
	int y;		//年に関するデータメンバ
	int m;		//月に関するデータメンバ
	int d;		//日にちに関するデータメンバ
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
	Date(int yy, int mm ,int dd)
	{
		this->y = yy;	//引数でデータメンバを初期化
		this->m = mm;	//引数でデータメンバを初期化
		this->d = dd;	//引数でデータメンバを初期化
	}



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
	Date preceding_day() const
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


	//その日付の曜日を返却する関数の宣言
	int day_of_week() const
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

	//日付の文字列表示を返却する関数の宣言
	std::string to_string() const
	{
		//文字列の出力ストリームを宣言
		std::ostringstream s;
		//出力ストリームに年月日の表示を加えて返却
		s << y << "年" << m << "月" << d << "日";
		return s.str();
	}
};
//挿入子の多重定義の宣言
std::ostream& operator<<(std::ostream& s, const Date& x)
{
	//クラスDateを出力するときメンバ関数to_stringを呼び出して年月日を表示
	return s << x.to_string();
}

//抽出子の多重定義の宣言
std::istream& operator>>(std::istream& s, Date& x);

//インクルードガードの終わり
#endif
