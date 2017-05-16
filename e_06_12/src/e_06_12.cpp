/* 演習06-12
 * b以上a以下の全整数の和を求める。bの実引数がないときbを1とみなして合計求める
 * 作成日：5月11日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数sum
 * b以上a以下の全整数の和を求める。bの実引数がないときはbを1とみなす。
 * 引数はint型の2つの整数
 * 返却値は求めた全整数の和
 * 作成日：5月11日
 * 作成者：成田修之
 */
int sum(int a,int b = 1);

int main()
{
	int nInputA;	//整数Aを入力するために使う変数
	int nInputB;	//整数Bを入力するために使う変数

	//全整数の和を求めることを明示
	cout	<< "整数Bから整数Aまでの全整数の和と1から整数Aまでの合計を求めます\n";
	//整数Aの入力を促す表示
	cout 	<< "整数A：";
	//キーボードから入力
	cin		>> nInputA;
	//整数Bの入力を促す表示
	cout	<< "整数B：";
	//キーボードから入力
	cin		>> nInputB;


	//合計を表示
	cout << nInputB << "から" << nInputA << "までの合計は" << sum(nInputA,nInputB) << "\n";
	//1から整数Aまでの合計を表示
	cout << "1から" << nInputA << "までの合計は" << sum(nInputA);

	//main関数の返却値
	return 0;
}


int sum(int a,int b = 1)
{
	//合計を求め返却するのに使う変数
	int nSum;
	//BからAまで続ける
	for(int i = b; i <= a; i++) {
		//加算して代入
		nSum += i;
	}
	//関数sumの返却値
	return nSum;
}
