//演習０４－０８
//intとdoubleの加法にsizeof演算子,typeid演算子を適用した値を表示とその考察
//
//5月4日
//成田修之
#include<typeinfo>
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	double c,d;

	cout << "int+intについて\n";
	cout << "大きさ：" << sizeof(a + b) <<'\n';
	cout <<"情報：" << typeid(a + b).name() <<'\n';

	cout << "double+doubleについて\n";
	cout << "大きさ：" << sizeof(c + d) << '\n';
	cout << "情報：" << typeid(c + d).name() << '\n';

	cout << "int + doubleについて\n";
	cout << "大きさ：" << sizeof(a + c) << '\n';
	cout << "情報：" << typeid(a + c).name() << '\n';

	cout << "double + int について\n";
	cout << "大きさ：" << sizeof(b + d) << '\n';
	cout << "情報：" << typeid(b + d).name() << '\n';


}
