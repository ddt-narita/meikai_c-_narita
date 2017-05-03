//演習０３－２３（２）　main
//list03-16を平均も求めるように書き換え
//
//5月3日
//成田修之
#include<iostream>
using namespace std;

int main(){
	int nCount;
	cout << "整数を加算します。\n";
	cout << "何個加算しますか：";
	cin >> nCount;

	int nSum;
	//後で使うのでfor文の中で宣言しないであらかじめ宣言しておく
	int nSumple = 0;

	for( ; nSumple < nCount; nSumple++){
		int nInput;
		cout <<"整数：";
		cin >> nInput;
		if(nSum + nInput > 1000){
			cout << "\a合計が1,000を超えました。\n最後の数値は無視します。\n";
			break;
		}
		nSum += nInput;
	}
	//break文によって途中で終わることがあるので数値の個数は繰り返した数(nSumple)
	cout << "合計は" << nSum <<"で平均は"<<nSum/nSumple << "です。\n";

}
