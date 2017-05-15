/* 演習07-11
 * n行5列のint型2次元配列aの全構成要素の値を縦横に並べて表示する関数print2dを作成
 * 作成日：5月15日
 * 作成者：成田修之
 */

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

	const int nArrayRowNumber = 3;		//2次元配列の行数
	int nArray[nArrayRowNumber][5];		//2次元配列

	//値の入力を促す
	cout << "2次元配列の各要素に値を入力してください。\n";

	//行数分繰り返す
	for(int i = 0; i < nArrayRowNumber; i++) {
		//列数分繰り返す
		for(int j = 0; j < 5; j++) {
			//各要素に入力を促す
			cout << "nArray[" << i << "][" << j<< "]：";
			//キーボードから入力
			cin  >> nArray[i][j];
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
			cout << setw(5) << a[i][j];
		}
		//行ごとに改行
		cout << "\n";
	}
}
