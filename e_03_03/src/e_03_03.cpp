/* 演習 03－03
 * 整数を2つの読み込みを小さいほうの数以上で大きいほうの数以下の全整数小さいほうから順に表示
 * 作成日：5月2日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	int nInputA;	//整数を入力するための変数A
	int nInputB;	//整数を入力するための変数B
	int nTrade;		//ソートするとき避難に使う変数


	//整数Aに入力を促す表示
	cout	<< "整数A：";
	//キーボードから入力
	cin 	>> nInputA;
	//整数Bに入力を促す表示
	cout 	<<"整数B：";
	//キーボードから入力
	cin 	>> nInputB;

	//aとbをaが小さくなるようにソートする
	if(nInputA > nInputB) {
		//aの値をnTradeに避難させる
		nTrade = nInputA;
		//aにbの値を代入してaが小さくなるようにする
		nInputA	= nInputB;
		//避難させていた大きいほうの値をbに代入する
		nInputB = nTrade;
	}

	//一文字表示に関しては追加可能なようにダブルコーテーション
	//aからbまでカウントアップするための変数
	int nCountUp = nInputA;

	do{
		//小さいほうの値を代入したものから表示
		cout << nCountUp << " ";
		//nCountUpを1増やす
		nCountUp = nCountUp + 1;

	//nCountUpがb以下である限り繰り返す
	} while(nCountUp <= nInputB);

	//main関数の返却値0
	return 0;
}
