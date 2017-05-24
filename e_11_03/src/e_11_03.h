/* 演習11-03
 * 演習11-01に抽出子と挿入子を追加する
 * 作成日：5月21日
 * 作成者：成田修之
 */
#include<iostream>
#include<sstream>


class Times
{
	int Hour;		//時間のデータメンバ
	int Minute;		//分のデータメンバ
	int Second;		//秒のデータメンバ

public:

	//デフォルトインストラクタ
	Times();
	//コンストラクタを設定
	Times(int h, int m, int s) {
		Hour = h;
		Minute = m;
		Second = s;
	}

	int hour() const{
		//時間のデータメンバを返却
		return Hour;
	}

	int minute() const{
		//分のデータメンバを返却
		return Minute;
	}

	int second() const{
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

	//時間に関するセッター
	void hour_set(int h)
	{
		//時間にセットする
		Hour = h;
	}
	//分に関するセッター
	void minute_set(int m)
	{
		//誕生月にセットする
		Minute = m;
	}
	//日に関するセッター
	void second_set(int s)
	{
		//誕生日にセットする
		Second = s;
	}

};

//挿入子の多重定義
std::ostream& operator<< (std::ostream& s, const Times& x)
{
	return s << x.hour() << "時" << x.minute() << "分" << x.second() << "秒";
}

//抽出子の多重定義
std::istream& operator>> (std::istream& s, Times& x)
 {
	int hour;		//時に入力しセットするための変数
	int min;		//分に入力しセットするための変数
	int sec;		//秒に入力しセットするための変数
	do {
		//時に入力を促す
		std::cout << "時：";
		//キーボードから入力
		s >> hour;
	}while(hour < 0 || 24 < hour);

	do{
		//分に入力を促す
		std::cout << "分：";
		//キーボードから入力
		s >> min;
	}while(min < 0 || 60 < min);

	do{
		//秒に入力を促す
		std::cout << "秒：";
		//キーボードから入力
		s >> sec;
	}while(sec < 0 || 60 < sec);

	x.hour_set(hour);		//セッターのメンバ関数を呼び出して時を設定する
	x.minute_set(min);		//セッターのメンバ関数を呼び出して分を設定する
	x.second_set(sec);		//セッターのメンバ関数を呼び出して秒を設定する

	return s;			//入力ストリームsを返却
 }
