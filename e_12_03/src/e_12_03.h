/* 演習12-03　ヘッダ部
 * 演習11-03で作成した時刻クラスに各種演算子関数を追加
 * 作成日：5月23日
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

	//等価演算子==の演算子関数
	friend bool operator==(const Times& x, const Times& y) {
		return x.Hour == y.Hour && x.Minute == y.Minute && x.Second == y.Second;
	}

	//等価演算子!=の演算子関数
	friend bool operator!=(const Times& x, const Times& y) {
		return !(x == y);
	}

	//2項加算演算子＋の演算子関数
	friend Times operator+ (const Times& x, const Times& y) {
			int h = x.Hour + y.Hour;		//2つの時間を合わせたもので初期化
			int m = x.Minute + y.Minute;	//2つの分を合わせたもので初期化
			int s = x.Second + y.Second;	//2つの秒を合わせたもので初期化

			//秒が60を超えるとき
			if(s >= 60) {
				//分を1増やしてそれが60を超えるとき
				if(++m >= 60){
					h++;		//時を1加算して
					h %= 24;	//24の剰余を代入
					m -= 60;	//60以上になっているので60で引く
					s -= 60;	//60以上になっているので60で引く
				}else{
					//分は60を超えない時
					h %= 24;	//時間を24の剰余で代入
					s -= 60;	//60以上になっているので60で引く
				}
			//秒が60を超えていない時
			} else {
				//分が60を超えるとき
				if(m >= 60){
					m -= 60;	//60以上なので60引く
					h++;		//時間を1増やす
					h %= 24;	//時間を24の剰余で代入
				}
			}
			//秒も時間も60を超えない時は時間を24の剰余で代入
			h %= 24;
			//加算された時刻のオブジェクトを作って返却
			return Times(h,m,s);
		}

};
//挿入子の多重定義の宣言
std::ostream& operator<< (std::ostream& s, const Times& x);

//抽出子の多重定義の宣言
std::istream& operator>> (std::istream& s, Times& x);
