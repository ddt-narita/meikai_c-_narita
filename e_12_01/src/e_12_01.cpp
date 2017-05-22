/* 演習12-01
 * 前置演算子関数から後置演算子関数を呼び出して書き換え、逆も行いどちらのほうが好ましいか検討
 * 作成日：5月22日
 * 作成者：成田修之
 */

#include<iostream>
#include"e_12_01.h"

using namespace std;

int main()
{
	int no;
	Counter x;
	Counter y;

	cout << "カウントアップ回数：";
	cin  >> no;
	for(int i = 0;i<no;i++) {
		cout << x++ << " " << ++y << "/n";
	}

	cout << "カウントダウン回数：";
	cin  >> no;
	for(int i =0; i < no; i++) {
		cout << x-- << " " << y-- << "\n";
	}

	if(!x) {
		cout << "xは0です。\n";
	} else {
		cout << "xは0ではありません。\n";
	}

}
