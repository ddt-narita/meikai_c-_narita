//演習０５－１２
//3次配列の要素数を求める式を書く
//
//5月8日
//成田修之
#include <iostream>
using namespace std;
int main()
{
	//3次の配列
	int nArray[2][543][2];

	//要素数は配列のサイズを最小のサイズで割ったもの
	cout << "配列nArrayは" << sizeof(nArray)/sizeof(nArray[0][0][0])<<"個の要素数からなる";
}
