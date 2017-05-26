/* 演習07-11
 * n行5列のint型2次元配列aの全構成要素の値を縦横に並べて表示する関数print2dを作成
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<ctime>
#include<cstdlib>
#include<iostream>
#include<iomanip>
using namespace std;

/* 関数print2d
 * n行5列のint型2次元配列aの全構成要素の値を縦横に並べて表示する
 * 引数は配列のポイント型
 * 返却値は無し
 * 作成日：5月15日
 * 作成者：成田修之
 */

void print2d(int a[][5],int n);


int main ()
{
	srand(time(NULL));

	const int nArrayRowNumber = 3;		//2次元配列の行数
	int nArray[nArrayRowNumber][5];		//2次元配列

	//行数分繰り返す
	for(int i = 0; i < nArrayRowNumber; i++) {
		//列数分繰り返す
		for(int j = 0; j < 5; j++) {
			nArray[i][j] = rand() % 1000 - 500;
		}
	}
	//関数print2dを呼び出し、全構成要素を縦横に表示
	print2d(nArray,nArrayRowNumber);

	//main関数の返却値
	return 0;
}

void print2d(int a[][5],int n)
{
	//行数分繰り返す
	for(int i = 0; i < n; i++) {
		//列数分繰り返す
		for(int j = 0; j < 5; j++) {
			//幅をそろえて各要素を表示
			cout << left <<setw(6) << a[i][j];
		}
		//行ごとに改行
		cout << "\n";
	}
}
