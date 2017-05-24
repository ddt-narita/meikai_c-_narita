/* 演習11-01
 * 時、分、秒のデータメンバで構成されている、時刻クラスを作成コンストラクタや
 * メンバ関数については自由に設計
 * 作成日：5月19日
 * 作成者：成田修之
 */

#include<iostream>
#include"e_11_01.h"
using namespace std;

int main()
{
	int nHour;		//時間の入力に使う変数
	int nMinute;	//分の入力に使う変数
	int nSecond;	//秒の入力に使う変数

	//現在時刻の入力を促す
	cout << "現在時刻を入力してください：\n";
	do {
		//現在の時間
		cout << "時：";
		//キーボードから入力
		cin  >> nHour;
	} while(nHour < 0 || 24 < nHour);

	do {
		//現在の分
		cout << "分：";
		//キーボードから入力
		cin  >> nMinute;
	}while(nMinute < 0 || 60 < nMinute);

	do{
		//現在の秒
		cout << "秒：";
		//キーボードから入力
		cin  >> nSecond;
	}while(nSecond < 0 || 60 < nSecond);

	//コンストラクタを読んでデータメンバを初期化
	Times now(nHour,nMinute,nSecond);

	//誕生日を確認する
	cout << "現在時刻は" << now.hour() << "時" << now.minute();
	cout << "分" << now.second() <<"秒ですね？\n";

	//何歳かを入力するのに使う変数
	int nOld;
	//今年で何歳になるかを入力
	cout << "何時間後を表示しますか：";
	//キーボードから入力
	cin  >> nOld;

	//今年が何年か表示
	cout << nOld <<"時間後は" << now.after_hour(nOld) << "時です";

	//main関数の返却値
	return 0;
}
