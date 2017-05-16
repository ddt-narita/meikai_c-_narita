/*演習06-02
 * 3つのint型引数の最小値を求める関数の作成
 * 作成日：5月8日
 * 作成者：成田修之
 * 更新日：5月11日
 * 成田修之
 */

#include<iostream>
using namespace std;

/* min関数
 * int型の3つ引数の最小値を求める関数
 * 引数はint型で3つの数
 * 返却値は最小値の入った変数nMax
 * 作成日：5月8日
 * 作成者：成田修之
 */

int min (int nInputA,int nInputB,int nInputC)
{
	//返却値であり最小値nMinをnInputAで初期化
	int nMin =nInputA;
	//nMinよりBのほうが小さいとき
	if(nMin > nInputB) {
		//BをnMinに代入
		nMin = nInputB;
	}

	//nMinよりCのほうが小さいとき
	if(nMin > nInputC) {
		//CをnMinに代入
		nMin = nInputC;
	}

	//返却値nMinを返す
	return nMin;
}

int main()
{
	int nInputA;	//判定する数を入力するための変数A
	int nInputB;	//判定する数を入力するための変数B
	int nInputC;	//判定する数を入力するための変数C

	//最小値を求めることの明示
	cout << "最小値を求めます。\n";
	//整数Aに入力を促す
	cout << "整数A：";
	//キーボードから入力
	cin  >> nInputA;
	//整数Bに入力を促す
	cout << "整数B：";
	//キーボードから入力
	cin  >> nInputB;
	//整数Cに入力を促す
	cout << "整数C：";
	//キーボードから入力
	cin  >> nInputC;

	//最小値を表示
	cout << "最小値は：" << min(nInputA,nInputB,nInputC);

	//main関数の返却値
	return 0;
}
