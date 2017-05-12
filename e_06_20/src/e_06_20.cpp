/* 演習06-20
 * 2つのint型整数の最小値、3つのint型の整数の最小値を求める2つの関数を多重定義
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数min
 * int型整数2つの最小値を求める関数
 * 引数はint型の2つの整数
 * 返却値は最小値nMin
 * 作成日：5月12日
 * 作成者：成田修之
 */

int min(int nInputA, int nInputB)
{
	//返却値をAで初期化
	int nMin = nInputA;
	//Bが最小値より小さいとき
	if(nInputB < nMin) {
		//最小値にBを代入
		nMin =nInputB;
	}
	//最小値を返却する
	return nMin;
}

/* 関数min
 * 3つのint型整数の最小値
 * 引数はint型の3つの整数
 * 返却値は最小値
 * 作成日：5月12日
 * 作成者：成田修之
 */

int min(int nInputA,int nInputB,int nInputC)
{
	//返却する最小値をAで初期化
	int nMin = nInputA;
	//Bが最小値より小さいとき
	if(nInputB < nMin) {
		//最小値にBを代入
		nMin =nInputB;
	}
	//Cが最小値より小さいとき
	if(nInputC < nMin) {
		//最小値にCを代入
		nMin = nInputC;
	}
	//最小値を返却
	return nMin;
}

int main()
{
	int nInputA;	//最小値を求めるため入力する変数A
	int nInputB;	//最小値を求めるため入力する変数B
	int nInputC;	//最小値を求めるため入力する変数C

	//整数Aに入力を促す表示
	cout << "整数Aの値：";
	//キーボードから入力
	cin  >> nInputA;
	//整数Bに入力を促す表示
	cout << "整数Bの値：";
	//キーボードから入力
	cin  >> nInputB;

	//入力されたAとBの最小値を求めて表示
	cout << "整数Aと整数Bの最小値は" << min(nInputA,nInputB) <<"です。\n";

	//整数Cに入力を促す表示
	cout << "整数Cの値：";
	//キーボードから入力
	cin  >> nInputC;

	//入力されたA、B、Cの最小値を求めて表示
	cout << "整数Aと整数Bと整数Cの最小値は" << min(nInputA,nInputB,nInputC) << "です。\n";

	//main関数の返却値
	return 0;
}
