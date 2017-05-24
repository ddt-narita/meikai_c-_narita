/* 演習11－01
 * 時、分、秒のデータメンバで構成される時刻クラスの作成
 * 作成日：5月19日
 * 作成者：成田修之
 */

class Times
{
	int Hour;		//年のデータメンバ
	int Minute;		//月のデータメンバ
	int Second;		//日のデータメンバ

public:
	//コンストラクタを設定
	Times(int h, int m, int s) {
		Hour	= h;
		Minute	= m;
		Second	= s;
	}

	int hour() {
		//時間のデータメンバを返却
		return Hour;
	}

	int minute() {
		//分のデータメンバを返却
		return Minute;
	}

	int second() {
		//秒のデータメンバを返却
		return Second;
	}

	void hour_spend(int hour_plus) {
		//引数分、時間のデータメンバに加算する
		Hour += hour_plus;
	}

	void minute_spend(int minute_plus) {
		//引数分、分のデータメンバに加算する
		Minute += minute_plus;
	}

	void second_spend(int second_plus) {
		//引数分、秒のデータメンバに加算する
		Second += second_plus;
	}

	//入力された時間後の時刻を返却するメンバ関数
	int after_hour(int h)
	{
		//現在の時刻の時と入力された整数を足して24時間表示にする
		int after_hour = (Hour + h) % 24;
		//返却する
		return after_hour;
	}
};
