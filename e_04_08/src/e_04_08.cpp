/* 演習 04-08
 * intとdoubleの加法にsizeof演算子、typeid演算子を適用した値の表示とその考察
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<typeinfo>
#include<iostream>
using namespace std;

int main()
{
	//sizeof演算子とtypeid演算子の()中に入るのは式か型
	//ここでは型同士の加法なのであらかじめ宣言しておいて使う
	int nA,nB;
	double dblC,dblD;

	//int型とint型の加法についてやることを明示
	cout << "int+intについて\n";
	//大きさについて
	cout << "大きさ：" << sizeof(nA + nB) <<'\n';
	//型の情報
	cout <<"情報：" << typeid(nA + nB).name() <<'\n';

	//double型とdouble型の加法についてやることの明示
	cout << "double+doubleについて\n";
	//大きさについて
	cout << "大きさ：" << sizeof(dblC + dblD) << '\n';
	//型の情報
	cout << "情報：" << typeid(dblC + dblD).name() << '\n';

	//int型とdouble型の加法についてやることを明示
	cout << "int + doubleについて\n";
	//大きさについて
	cout << "大きさ：" << sizeof(nA + dblC) << '\n';
	//型の情報
	cout << "情報：" << typeid(nA + dblC).name() << '\n';

	//double型とint型の加法についてやることを明示
	cout << "double + int について\n";
	//大きさについて
	cout << "大きさ：" << sizeof(nB + dblD) << '\n';
	//型の情報
	cout << "情報：" << typeid(nB + dblD).name() << '\n';


	//返却値
	return 0;
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
