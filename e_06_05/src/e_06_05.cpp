/* 演習06-05
 * 1からｎまでの全整数和を求めて返却する関数sumupの作成
 * 作成日：5月11日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数sumup
 * 1からｎまでの全整数和を求めて返却する
 * 引数はint型の整数
 * 返却値は1からｎまでの合計を代入した変数nSumup
 * 作成日：5月11日
 * 作成者：成田修之
 */
int sumup(int nInput);


int main()
{
	int nInput;		//どこまでの値を合計するかを入力するための変数

	cout << "1からｎまでの全整数の和を求めます\n";

	//入力される値が0以下の時繰り返す
	for(; nInput<=0;) {
		//nの値の入力を促す表示
		cout << "nの値：";
		//キーボードから入力
		cin >> nInput;
	}

	//合計の表示
	cout << "1から" << nInput << "までの合計は" << sumup(nInput) << "です。";

	//main関数の返却値
	return 0;
}


int sumup(int nInput)
{
	int nSumup;		//1から入力された値の合計

	//1から入力された値まで繰り返す
	for(int i = 1; i <= nInput; i++) {
		//加算して代入する
		nSumup += i;
	}
	//sumup関数の返却値
	return nSumup;
}
