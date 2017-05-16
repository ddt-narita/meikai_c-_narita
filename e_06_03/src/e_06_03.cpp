/* 演習06－03
 * 中央値を求める関数medを作成する
 * 作成日：5月8日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数min
 * int型3つの引数の中央値を求める関数
 * 引数はint型で3つの整数
 * 返却値は中央値の入った変数nMed
 * 作成日：5月8日
 * 作成者：成田修之
 */

int med(int nInputA, int nInputB, int nInputC)
{
	//返却値の中央値
	int nMed;
	//nInput_1がnInput_2以上の場合の中央値
	if (nInputA >= nInputB) {
		//nInput_3がnInput_2の数直線の左側の時
		if(nInputA > nInputC) {
			//Bを中央値に代入
			nMed = nInputB;

		//nInput_3がnIput_1より数直線上で右側の場合
		} else if (nInputA < nInputC) {
			//Aを代入
			nMed=nInputA;

		//nInput_3がnInput1とnInput2の間にあるとき
		} else {
			//Cを中央値に代入
			nMed =nInputC;
		}
	}

	//nInput_1がnInput_2以下の場合の中央値
	if(nInputA <= nInputB) {

		//nInput_3がnInput_2より大きい場合
		if(nInputB < nInputC) {
			//Bを中央値に代入
			nMed=nInputB;


		//nInput_3がnInput_1より小さいとき
		} else if (nInputA > nInputC) {
			//Aを中央値に代入
			nMed=nInputA;


		//nInput_1とnInput_2の間にあるとき
		} else {
			//Cを中央値に代入
			nMed = nInputC;
		}
	}

	//nMedを返却する
	return nMed;
}


int main()
{
	//実印数の3つ
	int nInputA,nInputB,nInputC;

	//3つの実引数に入力を促す
	cout <<"中央値を求めます。";

	//1つ目の整数Aに入力を促す
	cout << "整数A：";
	//キーボードから入力する
	cin >> nInputA;

	//2つ目の整数Bに入力を促す
	cout << "整数B：";
	//キーボードから入力する
	cin >> nInputB;

	//３つ目の整数Cに入力を促す
	cout <<"整数C：";
	//キーボードから入力する
	cin >> nInputC;


	///中央値を表示
	cout << "中央値は：" << med(nInputA,nInputB,nInputC) << "です。\n";

	//main関数の返却値
	return 0;
}
