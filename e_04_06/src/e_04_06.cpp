/* 演習 04-06
 * 3種類の浮動小数点型の」大きさを表示するプログラムの作成
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;
int main()
{
	//大きさをそれぞれ表示
	cout << "3種類の浮動小数点型の大きさを表示します。\n";
	//float型
	cout << "float型：" << sizeof(float) <<'\n';
	//double型
	cout << "double型：" << sizeof(double) << '\n';
	//long double型
	cout << "long double型"<< sizeof(long double) << '\n';

	//main関数の返却値
	return 0;
}
