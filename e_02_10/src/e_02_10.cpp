/* 演習 02-10
 * 3つの整数の最小値
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */

#include <iostream>
using namespace std;

int main()
{
	int nInputA;	//入力し最小値を求めるための整数A
	int nInputB;	//入力し最小値を求めるための整数B
	int nInputC;	//入力し最小値を求めるための整数C
	int nMin;		//ABCの最小値を求め代入するための変数

	//整数Aに入力を促すための表示
	cout 	<< "整数a：";
	//キーボードから入力
	cin 	>>nInputA;
	//整数Bに入力を促すための表示
	cout 	<< "整数b：";
	//キーボードから入力
	cin 	>> nInputB;
	//整数Cに入力を促すための表示
	cout 	<< "整数c：";
	//キーボードから入力
	cin		>> nInputC;

	//最小値minにaを初期化子として代入
	nMin = nInputA;

	//bがminより小さいとき
	if(nInputB < nMin) {
		//nMinにbを代入
		nMin = nInputB;
	}
	//cがnMinより小さいとき
	if(nInputC < nMin) {
		//nMinにcを代入
		nMin = nInputC;
	}
	//最小値を表示
	cout << "最小値は" << nMin << "です。\n";

	//main関数の返却値0
	return 0;
}
