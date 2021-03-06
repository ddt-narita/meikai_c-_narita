/* 演習09-06
 * 数当てゲームを変更　入出力部
 * 作成日：5月18日
 * 作成者：成田修之
 */

#include<iostream>
#include"e_09_06.h"

using namespace std;

static void prompt()
{
	//入力を促す表示
	cout << "0～" << max_no << "の数：";
}

int input()
{
	//入力するための変数
	int val;

	do {
		//入力を促す表示を関数を呼び出して行う
		prompt();
		//キーボードから入力
		cin >> val;
	//入力された値が0から最大の範囲に入るまでおこなう
	}while(val < 0 || val >max_no);

	//入力された値を返却
	return val;
}

bool confirm_retry()
{
	//入力するための変数
	int cont;
	//もう一度やるか入力を促す表示
	cout << "もう一度しますか？：\n";
	cout << "<Yes…1/No…0>：";
	//キーボードから入力
	cin  >> cont;

	//int型で入力されているのでbool型にキャストして返却
	return static_cast<bool>(cont);
}
