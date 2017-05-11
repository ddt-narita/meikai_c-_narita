/* 演習 02-06
 * 点数に応じて判定を出す
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之 */

#include<iostream>
using namespace std;

int main ()
{
	//キーボードから点数を入力
	int nInput;
	//何点であるか入力をうながす表示
	cout 	<< "点数を判定します。\n何点ですか：";
	//キーボードから入力
	cin 	>> nInput;

	//点数が0～59点の時
	if( nInput >= 0 && nInput <= 59) {
		//判定が不可であることを表示
		cout << "不可\n";

	//点数が60～69の時
	} else if ( nInput >= 60 && nInput <= 69 ) {
		//判定が可であることを表示
		cout << "可\n";

	//点数が70～79の時
	} else if ( nInput >= 70 && nInput <= 79 ) {
		//判定が良であることを表示
		cout << "良\n";

	//80～100の時
	} else if ( nInput >= 80 && nInput <= 100 ) {
		//判定が優であることを表示
		cout << "優\n";
	}

	//main関数の返却値0
	return 0;
}
