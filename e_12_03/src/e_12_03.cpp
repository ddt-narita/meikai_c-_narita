/* 演習12-03
 * 演習11-03で作成した時刻クラスに各種演算子関数を追加
 * 作成日：5月23日
 * 作成者：成田修之
 */

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<sstream>
#include"e_12_03.h"

using namespace std;

//デフォルトコンストラクタの宣言
Date::Date()
{
	//現在の時間で初期化した暦時刻time_t型の変数を宣言
	time_t current =time(NULL);
	//暦時刻を日本時間になるように変換
	struct tm* local = localtime(&current);
	Year = local->tm_year+1900;	//日本時間の年を代入
	Month = local->tm_mon +1;		//日本時間の月を代入
	Day = local->tm_mday;			//日本時間の日を代入
}

int main() {
	Date today;			//デフォルトコンストラクタで今日の日付で初期化
	Date birthday;		//誕生日を入力するためのオブジェクト

	//入力を促す
	cout << "誕生日を入力してください\n";
	//キーボードから入力
	cin  >> birthday;

	//2000年1月1日で初期化されたオブジェクト
	Date twentyCentury(2000,1,1);

	//入力された誕生日と一致する時
	if(birthday == twentyCentury) {
		//2000年1月1日生まれであることを表示
		cout << "2000年1月1日生まれですね。\n";
	//違うとき
	} else {
		//2000年1月1日ではないことを表示
		cout << "2000年1月1日生まれではありませんね。\n";
	}

	//生まれてから何年経過したか表示
	cout << "あなたは生まれてから" << today - birthday << "生きています。\n";

	//main関数の返却値
	return 0;
}
