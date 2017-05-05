//演習０４－０７
//浮動小数点型の情報をtypeid演算子によって表示する
//
//5月4日
//成田修之
#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	cout << "浮動小数点型の情報を表示します。\n";
	cout << "float型：" 	<< typeid(float).name() <<'\n';
	cout << "double型：" 	<< typeid(double).name() << '\n';
	cout << "long double型：" << typeid(long double).name() << '\n';
}
