/* 演習07-07
 * 要素数nの配列aから要素a[idx]を排除する関数arymvの作成
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数arymv
 * 要素数nの配列から要素a[idx]を排除する関数
 * 引数は配列のポイント型、要素数、排除する要素[idx]
 * 返却値は無し
 * 作成日：5月15日
 * 作成者：成田修之
 */

void arymv(int a[],int n,int idx);


int main()
{
	//配列の要素数
	int nArrayNumber = 6;
	//要素数nArrayNumberの配列
	int nArray[nArrayNumber];
	//削除する要素の番号
	int nArrayIdx;

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素に入力を促す
		cout << "nArray[" << i << "] ：";
		//キーボードから入力
		cin  >> nArray[i];
	}

	//何番目を削除するか入力を促す
	cout << "要素の何番目かを削除します。何番目？：";
	//キーボードから入力
	cin  >> nArrayIdx;

	//関数arymvを呼び出して削除した後の配列を生成
	arymv(nArray, nArrayNumber, nArrayIdx);

	//削除後の配列を表示
	cout << "削除後の配列を表示します\n";
	//要素数分繰り返す
	for(int i = 0 ; i < nArrayNumber; i++) {
		//各要素を表示
		cout << "nArray[" << i << "] =" << nArray[i] << "\n";
	}

	//main
	return 0;
}

void arymv(int a[],int n,int idx)
{
	//削除する配列の要素から入れ替え始めるので要素数から削除する番目引いた回数繰り返す
	for(int i = 0; i < n - idx; i++) {
		//一つ後の要素を代入
		a[idx + i - 1] = a[idx + i];
	}
}
