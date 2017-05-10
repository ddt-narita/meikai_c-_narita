/* 演習 01_06
 * int型が整数しか扱えないことの確認
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月8日
 * 更新者：成田修之*/

#include <iostream>
using namespace std;

int main()
{
	int nInputX;	//代入する変数xの宣言
	int nInputY;	//代入する変数yの宣言

	//平均が小数部を持つように整数を変数xに代入
	nInputX = 45;
	//平均が小数部を持つように整数を変数yに代入
	nInputY = 32;

	//入力したxの値の表示
	cout << "xの値は"	<< nInputX << "です。\n";
	//入力したyの値の表示
	cout << "yの値は" 	<< nInputY << "です。\n";

	//ｘ、ｙの合計を表示（平均の値から
	cout << "合計は" 	<< nInputX + nInputY 		<< "です。\n";
	//本来は平均がｘとｙの値から38.5となる（int型が小数を扱えないことを確認する）
	cout << "平均は" 	<< (nInputX + nInputY) / 2	<< "です。\n";

	//返却値0
	return 0;
}

/*結果：３８となった結果からこの環境ではint型は整数値のみしか扱えず小数部に関しては
 切り捨てとなる*/
