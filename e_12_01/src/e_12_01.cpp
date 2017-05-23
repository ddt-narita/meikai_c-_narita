/* 演習12-01
 * 前置演算子関数から後置演算子関数を呼び出して書き換え、逆も行いどちらのほうが好ましいか検討
 * 作成日：5月22日
 * 作成者：成田修之
 * 更新日：5月23日
 * 更新者：成田修之
 */

#include<iostream>
#include"e_12_01.h"

using namespace std;

int main()
{
	int no;			//カウント数を入力するための変数
	Counter x;		//後置演算子を適用するカウンタークラスx
	Counter y;		//前置演算子を適用するカウンタークラスy

	//カウント回数の入力するように促す表示
	cout << "カウントアップ回数：";
	//キーボードから入力
	cin >> no;
	//入力された回数分繰り返す
	for(int i = 0; i < no; i++) {
		//後置と前置でどう変わるか確認
		cout << x++ << " " << ++y << "\n";
	}

	//カウントダウンの回数の入力するように促す表示
	cout << "カウントダウン回数：";
	//キーボードから入力
	cin >> no;
	//入力された回数繰り返す
	for(int i = 0; i < no; i++) {
		//前置と後置の違いを確認
		cout << x-- << " " << --y << "\n";
	}

	//演算子関数を使った後xがいくつになってるか確認、0の時は
	if(!x) {
		//0であることを表示
		cout << "xは0です。\n";
	//0でない時は
	} else {
		//0ではないことを表示
		cout << "xは0ではありません。\n";
	}

	//main関数の返却値
	return 0;

}
