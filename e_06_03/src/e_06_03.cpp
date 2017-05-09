//演習06－03
//中央値を求める関数medを作成する
//
//5月8日
//成田修之
#include<iostream>
using namespace std;

//関数min
//int型3つの引数の中央値を求める関数
//引数はint型で3つの整数
//返却値は中央値の入った変数nMed
//5月8日
//成田
int med(int nInput_1, int nInput_2,int nInput_3)
{
	//返却値の中央値
	int nMed;
	//nInput_1がnInput_2以上の時の中央値
	if (nInput_1 >= nInput_2){
		if(nInput_2 > nInput_3){
			nMed=nInput_2;
		} else if (nInput_1 < nInput_3) {
			nMed=nInput_1;
		} else {
			nMed =nInput_3;
		}
	}

	//nInput_1がnInput_2以下の時の中央値
	if(nInput_1 <= nInput_2) {
		if(nInput_2 < nInput_3) {
			nMed=nInput_2;
		} else if (nInput_1 > nInput_3) {
			nMed=nInput_1;
		} else {
			nMed = nInput_3;
		}
	}
	//nMedを返却する
	return nMed;
}


int main()
{
	//実印数の3つ
	int nInput_1,nInput_2,nInput_3;
	//3つの実引数に入力
	cout <<"中央値を求めます。";
	cout << "整数A：";
	cin >> nInput_1;
	cout << "整数B：";
	cin >> nInput_2;
	cout <<"整数C：";
	cin >> nInput_3;

	//実引数3つを渡し、中央値を求める関数medを呼び出し中央値を表示
	int nMed = med(nInput_1,nInput_2,nInput_3);
	cout << "中央値は：" << nMed << "です。\n";



}
