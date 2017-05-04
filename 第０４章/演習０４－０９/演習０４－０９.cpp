//演習０４－０９ キャスト記法
/*読み込んだ3つの整数の合計と平均を表示する。キャスト記法、関数的記法、
static_cast演算子を使ったものをそれぞれ作る*/
//
//5月4日
//成田修之
#include<iostream>
using namespace std;
int main()
{
	int nInputA,nInputB,nInputC =0; //入力する整数A,B,C
	cout << "3つの整数の合計と平均を求めます\n";
	cout << "整数A：";
	cin >> nInputA;
	cout << "整数B：";
	cin >> nInputB;
	cout << "整数C：";
	cin >> nInputC;

	int nSum = nInputA + nInputB +nInputC;
	double dAve = (double)nSum/3;

	cout << "合計は：" << nSum << '\n';
	cout << "平均は：" << dAve << '\n';
}
