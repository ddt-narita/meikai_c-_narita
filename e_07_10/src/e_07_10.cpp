/* 演習07-09
 * n行5列のint型2次元配列aの各行の最大値を、要素数nの1次元配列mに格納する
 * 関数maxlineを作成
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数maxline
 * n行5列のint型2次元配列aの各行の最大値を、要素数nの1次元配列mに格納する
 * 引数は2次元配列のポインタ型、配列のポイント型、2次元配列と1次元配列の行数
 * 返却値は無し
 * 作成日：5月15日
 * 作成者：成田修之
 */

void maxlines(int a[][5],int m[],int n);


int main()
{
	const int nArrayRowNumber = 3;			//2次元配列と1次元配列の行数
	int nArray2[nArrayRowNumber][5];	//2次元配列
	int nArray1[nArrayRowNumber];		//上の2次元配列の行ごとの最大値の入った1次元配列

	//各要素への値の入力を促す表示
	cout << "各要素に値を入力して下さい\n";
	//行数分繰り返す
	for(int i = 0; i < nArrayRowNumber; i++) {
		//列数分繰り返す
		for (int j = 0; j < 5; j++) {
			//各要素に入力を促す表示
			cout << "nArray1[" << i << "][" << j << "]：";
			//キーボードから入力
			cin  >> nArray2[i][j];
		}
	}

	maxlines(nArray2,nArray1,nArrayRowNumber);

	//2次元配列の行ごとの最大値を表示することを明示
	cout << "各行の要素の最大値を表示します\n";
	//列数分繰り返す
	for(int i = 0; i < nArrayRowNumber; i++) {
		//各行の最大値を表示
		cout << i << "行目の最大値は" << nArray1[i] << "です。\n";
	}

	//main関数の返却値
	return 0;
}


void maxlines(int a[][5],int m[],int n)
{
	//列数分繰り返す
	for(int i = 0; i < n; i++) {
		//まず最初は最大値をはじめの数で初期化
		int nLineMax = a[i][0];
		//2番目の要素から最後まで繰り返す
		for(int j = 1; j < 5; j++){
			//その要素のほうが最大値より大きいとき
			if(a[i][j] > nLineMax) {
				//その要素の値を代入
				nLineMax = a[i][j];
			}
		}
		//列ごとの最大値を1次元配列に格納
		m[i] = nLineMax;
	}
}

