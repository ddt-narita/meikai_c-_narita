/* 演習02-08
 * 2つの整数値の差を表示する
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之 */

#include<iostream>
using namespace std;

int main()
{
	int nInputA;	//差を比べるための変数a
	int nInputB;	//差を比べるための変数b


	//変数Aに入力を促す表示
	cout	<< "整数a:";
	//キーボードから入力
	cin		>> nInputA;
	//変数Bに入力を促す表示
	cout	<< "整数b:";
	//キーボードから入力
	cin		>> nInputB;


	//条件演算子を使ってaが大きければa-bで、bのほうが大きければb-aで差を求める
	cout << "2つの整数の差は";
	cout << (nInputA > nInputB ? nInputA - nInputB : nInputB - nInputA) << "です。\n";

	//main関数の返却値0
	return 0;
}
