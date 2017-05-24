/* 演習11-03
 * 演習11-01の時刻クラスに挿入子と抽出子を追加
 * 作成日：5月21日
 * 作成者：成田修之
 */
#include<iostream>
#include"e_11_03.h"
#include<sstream>
using namespace std;

//デフォルトコンストラクタ
Times::Times()
{
		Hour = 1;		//引数を受け取らない時は年を1で初期化
		Minute = 1;		//引数を受け取らない時は月を1で初期化
		Second = 1;		//引数を受け取らない時は日を1で初期化
}

int main()
{
	Times now;		//現在時刻を入力するオブジェクトの作成

	//誕生日の入力を促す
	cout << "現在時刻を入力してください：\n";
	cin >> now;

	//誕生日を確認する
	cout << "現在時刻は" << now << "ですね？\n";

	//何歳かを入力するのに使う変数
	int nAfter;
	//今年で何歳になるかを入力
	cout << "何時間後を表示しますか：";
	//キーボードから入力
	cin  >> nAfter;

	//メンバ関数を呼び出して入力された時間後に設定
	now.hour_spend(nAfter);
	//今年が何年か表示
	cout << nAfter << "時間後は" << now.hour() % 24 << "時です";

	//main関数の返却値
	return 0;
}

