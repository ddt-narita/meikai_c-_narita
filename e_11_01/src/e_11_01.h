/* 演習11－01
 * 時、分、秒のデータメンバで構成される時刻クラスの作成
 * 作成日：5月19日
 * 作成者：成田修之
 */

class Date
{
	int Year;		//年のデータメンバ
	int Month;		//月のデータメンバ
	int Day;		//日のデータメンバ

public:
	//コンストラクタを設定
	Date(int yy, int mm, int dd) {
		Year=yy;
		Month=mm;
		Day=dd;
	}

	int year() {
		//年のデータメンバを返却
		return Year;
	}

	int month() {
		//月のデータメンバを返却
		return Month;
	}

	int day() {
		//日のデータメンバを返却
		return Day;
	}

	void year_spend(int year_plus) {
		//引数分、年のデータメンバに加算する
		Year += year_plus;
	}

	void month_spend(int month_plus) {
		//引数分、月のデータメンバに加算する
		Month += month_plus;
	}

	void day_spend(int day_plus) {
		//引数分、日のデータメンバに加算する
		Day += day_plus;
	}
};
