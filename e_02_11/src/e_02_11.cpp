/* 演習 02-11
 * 入力された3つの整数の中央値を表示
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	int nInputA;	//入力し中央値を求めるのに使う整数A
	int nInputB;	//入力し中央値を求めるのに使う整数B
	int nInputC;	//入力し中央値を求めるのに使う整数C
	int nCenter;	//ABCの中央値を求め代入するのに使う変数

	//整数Aに入力を促すための表示
	cout 	<< "整数値a：";
	//整数Aに値を代入
	cin 	>> nInputA;
	//整数Bに入力をうながすための表示
	cout 	<< "整数値b：";
	//整数Bに値を入力
	cin 	>> nInputB;
	//整数Cに入力を促すための表示
	cout 	<< "整数値c：";
	//整数Cに値を入力
	cin 	>> nInputC;

	//中央値をはじめ整数Aにしておく
	nCenter = nInputA;

	//a>bの時とa<bの時、数直線上でcがどの位置にいるかで分けて考える
	//a>bの時
	if (nInputA > nInputB) {
		//cがbより小さい場合
		if(nInputB > nInputC) {
			//中央値はb
			nCenter = nInputB;

		//cがaより小さい場合
		} else if(nInputA > nInputC) {
			//中央値はC
			nCenter = nInputC;
		}

	//a<bの時
	} else if(nInputA < nInputB) {
		//cがbより大きい場合
		if(nInputB < nInputC) {
			//中央値はB
			nCenter = nInputB;

		//cがb以下でaより大きいとき
		} else if (nInputA < nInputC) {
			//中央値はC
			nCenter = nInputC;
		}
	}
	//中央値を表示
	cout << "中央値は" << nCenter << "です。\n";

	//main関数の返却値0
	return 0;

}
