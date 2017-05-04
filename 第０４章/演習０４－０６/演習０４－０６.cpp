//演習０４－０６
//3種類の浮動小数点型の大きさを表示するプログラムの作成
//
//5月4日
//成田修之
#include<iostream>
using namespace std;
int main()
{
	cout << "3種類の浮動小数点型の大きさを表示します。\n";
	cout << "float型：" << sizeof(float) <<'\n';
	cout << "double型：" << sizeof(double) << '\n';
	cout << "long double型"<< sizeof(long double) << '\n';

}
