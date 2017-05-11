/* 演習02-13
 * 2つの整数を大きい順にソートする
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main ()
{
	int nInputA;	//ソートする値を入力する変数A
	int nInputB;	//ソートする値を入力する変数B
	int nTrade;		//ソートする際にAの値を避難させておくための変数


	//整数Aに入力を促す表示
	cout << "整数値a：";
	//キーボードから入力
	cin >> nInputA;
	//整数Bに入力を促す表示
	cout << "整数値b：";
	//キーボードから入力
	cin >> nInputB;

	//a<bの時、bの値がaになるようにtを使って値の交換
	if(nInputA < nInputB){
		//nTradeにAの値を避難する
		nTrade = nInputA;
		//AにBの値を代入する
		nInputA = nInputB;
		//Bに避難していたAの値を代入する
		nInputB = nTrade;
	}
	//ソートしたことを表示
	cout << "a≧bとなるようにソートしました。\n";
	//A(大きいほう)を表示
	cout << "整数値aは" << nInputA << "です。\n";
	//B(小さいほうを表示)
	cout << "整数値bは" << nInputB << "です。\n";

	//main関数の返却値0
	return 0;
}
