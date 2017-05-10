/* 演習 02-01
 * 入力された値の絶対値を求める
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */
#include<iostream>
using namespace std;

int main()
{
	//入力するのに使う変数を宣言
	int nInput;
	//整数の入力を促す表示
	cout 	<< "整数値：";
	//キーボードから入力
	cin		>> nInput;

	//nInputの値が負の時
	if(nInput < 0) {
		//その値に-を付けてを表示する
		cout << "その絶対値は" << -nInput << "です。\n";
	}

	//負でない場合はその値をそのまま表示
	cout << "その絶対値は" << nInput << "です。\n";

	//main関数の返却値0
	return 0;
}
