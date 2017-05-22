/* 演習11-03
 * 演習11-01に抽出子と挿入子を追加する
 * 作成日：5月21日
 * 作成者：成田修之
 */
#include<iostream>
#include<sstream>

class Date
{

	int Year;		//年のデータメンバ
	int Month;		//月のデータメンバ
	int Day;		//日のデータメンバ
public:

	//デフォルトインストラクタ
	Date();
	//コンストラクタを設定
	Date(int yy, int mm, int dd) {
		Year=yy;
		Month=mm;
		Day=dd;
	}

	int year() const
	{
		//年のデータメンバを返却
		return Year;
	}

	int month() const
	{
		//月のデータメンバを返却
		return Month;
	}

	int day() const
	{
		//日のデータメンバを返却
		return Day;
	}

	void year_spend(int year_plus)
	{
		//引数分、年のデータメンバに加算する
		Year += year_plus;
	}

	void month_spend(int month_plus)
	{
		//引数分、月のデータメンバに加算する
		Month += month_plus;
	}

	void day_spend(int day_plus)
	{
		//引数分、日のデータメンバに加算する
		Day += day_plus;
	}
	//誕生日と年齢から今年の年数を求めるメンバ関数
	int this_year (int y){
		//誕生日に年齢を足して返却
		return Year + y;
	}

	//年に関するセッター
	void year_set(int y)
	{
		//誕生日にセットする
		Year = y;
	}
	//月に関するセッター
	void month_set(int m)
	{
		//誕生月にセットする
		Month = m;
	}
	//日に関するセッター
	void day_set(int d)
	{
		//誕生日にセットする
		Day = d;
	}
};
//挿入子の多重定義
std::ostream& operator<< (std::ostream& s, const Date& x)
{
	//データメンバを返却するメンバ関数を呼び出して表示
	return s << x.year() << "年" << x.month() << "月" << x.day() << "日";
}

//抽出子の多重定義
std::istream& operator>> (std::istream& s, Date& x)
 {
	int y;		//年に入力しセットするための変数
	int m;		//月に入力しセットするための変数
	int d;		//日に入力しセットするための変数
	//年に入力を促す
	std::cout << "年：";
	//キーボードから入力
	s >> y;
	//月に入力を促す
	std::cout << "月：";
	//キーボードから入力
	s >> m;
	//日に入力を促す
	std::cout << "日：";
	//キーボードから入力
	s >> d;

	x.year_set(y);		//セッターのメンバ関数を呼び出して年を設定する
	x.month_set(m);		//セッターのメンバ関数を呼び出して月を設定する
	x.day_set(d);		//セッターのメンバ関数を呼び出して日を設定する

	return s;			//入力ストリームsを返却
 }
