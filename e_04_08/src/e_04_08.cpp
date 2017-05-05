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
	//sizeof演算子とtypeid演算子の()中に入るのは式か型
	//ここでは型同士の加法なのであらかじめ宣言しておいて使う
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
/*結果は
int+intについて
大きさ：4
情報：i
double+doubleについて
大きさ：8
情報：d
int + doubleについて
大きさ：8
情報：d
double + int について
大きさ：8
情報：d
とint同士の計算以外ではint型のものがより大きいdouble型に自動的に合わせている
ことがわかる。*/
