/* 演習 02-07
 * 2つの実数のうち大きいほうを表示
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之 */

#include <iostream>
using namespace std;

int main()
{
	double dblInputA;	//入力された実数値の大小を求めるのに使う変数A
	double dblInputB;	//入力された実数値の大小を求めるのに使う変数B

	//実数値aにキーボードからの入力を促す文
	cout 	<< "実数値a：";
	//キーボードから入力
	cin 	>> dblInputA;
	//実数値bにキーボードからの入力を促す表示
	cout 	<< "実数値b：";
	//キーボードから入力
	cin 	>> dblInputB;

	//条件演算子を使って大きいほうの値を表示する
	cout << "大きいほうの値は" << (dblInputA > dblInputB ? dblInputA : dblInputB);
	cout << "です。\n";

	//main関数の返却値0
	return 0;
}
