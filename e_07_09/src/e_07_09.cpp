/* 演習07-09
 * 要素数nの配列aの要素a[idx]にxを挿入する関数aryins
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数aryins
 * 要素数nの配列aの要素a[idx]にxを挿入する関数
 * 引数は配列のポインタ型、要素数、挿入対象の要素、挿入する値
 * 返却値なし
 * 作成日：5月15日
 * 作成者：成田修之
 */

void aryins(int a[],int n,int idx,int x);


int main()
{
	//配列の要素数
	const int nArrayNumber = 10;
	//要素数nArrayNumberの配列
	int nArray[nArrayNumber];
	//挿入する要素の番号
	int nArrayIdx;
	//挿入する値
	int nIns;

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素に入力を促す
		cout << "nArray[" << i << "] ：";
		//キーボードから入力
		cin  >> nArray[i];
	}

	//何番目に挿入するか入力を促す
	cout << "要素の何番目かに値を挿入します。何番目？：";
	//キーボードから入力
	cin  >> nArrayIdx;
	//何個削除するか入力を促す
	cout << "挿入する値は？：";
	//キーボードから入力
	cin  >> nIns;


	aryins(nArray, nArrayNumber, nArrayIdx,nIns);

	//削除後の配列を表示
	cout << "挿入後の配列を表示します\n";
	//要素数分繰り返す
	for(int i = 0 ; i < nArrayNumber; i++) {
		//各要素を表示
		cout << "nArray[" << i << "] =" << nArray[i] << "\n";
	}

	//main関数の返却値
	return 0;
}


void aryins(int a[],int n,int idx,int x)
{
	//要素の一番最後からから挿入する番まで繰り返す
	for(int i = 0;i < n - idx; i++) {
		//後ろの要素にその手前の値を代入する
		a[n - i - 1] = a[n - i - 2];
	}
	//挿入するところにあった値まで後ろの要素に代入出来たら挿入する値を代入する
	a[idx - 1] = x;
}
