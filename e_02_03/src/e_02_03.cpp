/* 演習 02-03
 * 2つの整数の大小関係を求めて表示
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之 */

#include<iostream>
using namespace std;

int main()
{
	int nInput_a;	//キーボードから入力し整数bと比べるための変数a
	int nInput_b;	//キーボードから入力し整数aと比べるための変数b

	//整数bの値の入力を促す表示
	cout << "整数a：";
	//キーボードから入力
	cin  >> nInput_a;
	//整数aの値の入力を促す表示
	cout << "整数b：";
	//キーボードから入力
	cin  >> nInput_b;

	//整数aのほうが大きいとき
	if (nInput_a > nInput_b) {
		//aのほうが大きいことを表示
		cout << "aのほうが大きいです。\n";

	//整数bのほうが大きいとき
	} else if(nInput_a < nInput_b) {
		//bのほうが多いいことを表示
		cout << "bのほうが大きいです。\n";

	//それ以外のaとbが同じ値をとるとき
	} else {
		//aとbが同じ値であることを表示
		cout << "aとbは同じ値です。\n";
	}

	//main関数の返却値0
	return 0;
}
