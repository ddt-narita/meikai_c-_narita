//演習０４－０５
//float型とdouble型のいろいろな数値を入力し表示させ検証する
//
//5月4日
//成田修之
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	float f;
	double d;
	cout << "float型の数値：";
	cin >> f;
	cout << "double型の数値：";
	cin >> d;

	cout << "表示します\n";
	cout << "float型：" << setprecision(30) << f <<'\n';
	cout << "double型：" << setprecision(30) << d << '\n';
}
