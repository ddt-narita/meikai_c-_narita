/* 演習05-12
 * 3次配列の要素数を求める式を書く
 * 作成日：5月8日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */

#include <iostream>
using namespace std;
int main()
{
	//3次の配列
	int nArray[2][3][2];

	cout << "要素数は配列の大きさ / 構成要素の大きさなので\n";
	//要素数は配列のサイズを最小のサイズで割ったもの
	cout << "配列nArrayは" << sizeof(nArray)/sizeof(nArray[0][0][0])<<"個の構成要素をもつ。\n";

	cout << "行数は行の大きさ / 列の大きさによって求め、";
	cout <<sizeof(nArray[0]) / sizeof(nArray[0][0]) << "行で、\n";

	cout <<"列数は列の大きさ / 構成要素の大きさによって求め、";
	cout << sizeof(nArray[0][0]) / sizeof(nArray[0][0][0]) << "列です。\n";
}
