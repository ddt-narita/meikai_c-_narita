/* 演習 04-07
 * 浮動小数点型の情報をtypeid演算子によって表示する
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<iostream>
//typeid演算子を使うためのヘッダ
#include<typeinfo>
using namespace std;
int main()
{
	//各浮動小数点型の情報を表示
	cout << "浮動小数点型の情報を表示します。\n";
	//float型
	cout << "float型：" 	<< typeid(float).name() <<'\n';
	//double型
	cout << "double型：" 	<< typeid(double).name() << '\n';
	//long double型
	cout << "long double型：" << typeid(long double).name() << '\n';

	//main関数の返却値0
	return 0;
}
