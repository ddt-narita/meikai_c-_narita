/* 演習 01-08
 * int型に実数値の初期化子を与えた時の検証
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月8日
 * 更新者：成田修之 */

#include <iostream>
using namespace std;

int main()
{
	int nRealX = 43.9;		//xに実数値の初期化子を与える
	int nRealY = 32.6;		//yに実数値の初期化子を与える

	//入力したnRealXの値の表示
	//入力されたのは実数値なので小数部は切り捨てて表示される
	cout << "xの値は" 	<< nRealX << "です。\n";
	//nRealYについても同じく確認
	cout << "yの値は" 	<< nRealY << "です。\n";

	//合計を表示
	cout << "合計は"	<< nRealX + nRealY			<< "です。\n";
	//平均を表示
	cout << "平均は" 	<< (nRealX + nRealY) / 2	<< "です。\n";

	//返却値0
	return 0;
}

/*結果：int型に実数値の初期化子を与えると
その値の小数部を切り捨てた値が入力される*/
