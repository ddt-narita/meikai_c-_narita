/*演習 01-07
 * 3つのint型の値の合計と平均
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月8日
 * 更新者：成田修之  */

#include <iostream>
using namespace std;

int main ()
{
	int nInput_1;	//代入に使う変数1を宣言
	int nInput_2;	//代入に使う変数2を宣言
	int nInput_3;	//代入に使う変数3を宣言

	nInput_1 = 56;	//変数1に任意の数の代入
	nInput_2 = 34;	//変数2に任意の数を代入
	nInput_3 = 12;	//変数3に任意の数を代入

	//変数1に代入した値の表示
	cout << "xの値は" << nInput_1 << "です。\n";
	//変数2に代入した値の表示
	cout << "yの値は" << nInput_2 << "です。\n";
	//変数3に代入した値の表示
	cout << "zの値は" << nInput_3 << "です。\n";

	//合計を表示
	cout << "合計は" << nInput_1 + nInput_2 + nInput_3			<<"です。\n";
	//平均を表示
	cout << "平均は" << (nInput_1 + nInput_2 + nInput_3) / 3	<< "です。\n";

	//返却値0
	return 0;
}
