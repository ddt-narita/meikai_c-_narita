/* 演習09－01
 * 再起呼び出しを行わずに関数factorialを実現
 * 作成日：5月17日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数factorial
 * 再起呼び出しを行わずに階乗を計算する関数
 * 引数はint型
 * 返却値は求めた階乗
 * 作成日：5月18日
 * 作成者：成田修之
 */

int factorial (int n)
{
	//返却するための変数
	int nFactorial = 1;
	//n回繰り返す
	for(int i = 1; i <= n; i++){
		//iをかけたものを代入
		nFactorial *= i;
	}
	//求めた階乗を返却
	return nFactorial;

}


int main()
{
	//階乗を求める値を入力するための変数
	int nInput;

	//入力を促す
	cout << "階乗を求めます。整数を入力してください：";
	//キーボードから入力
	cin  >> nInput;

	//関数factorialを呼び出して階乗を表示
	cout << nInput <<"の階乗は" << factorial(nInput) << "です。\n";

	//main関数の返却値
	return 0;
}
