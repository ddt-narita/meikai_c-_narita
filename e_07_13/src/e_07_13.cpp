/* 演習07-13
 * 要素数がnである配列bの全要素を配列aにコピーする関数
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

void ary_copy(int* a,const int* b,int n);


int main()
{
	const int nArrayNumber = 6;	//配列の要素数
	int nArrayA[nArrayNumber];		//配列Bをコピーする配列
	int nArrayB[nArrayNumber];		//配列Aにコピーするオリジナルの配列

	//各要素への入力を促す
	cout << "配列Bの各要素に入力して下さい。\n";
	//要素分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素へ代入を促す
		cout << "nArrayB[" << i << "]：";
		//キーボードから入力
		cin  >> nArrayB[i];
	}

	//関数ary_copyを呼び出して配列Bにコピー
	ary_copy(nArrayA,nArrayB,nArrayNumber);
	//コピー後の各要素を表示することを明示
	cout << "コピーした配列の各要素を表示します。\n";
	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素を表示
		cout << "nArrayA[" << i << "]：" << nArrayA[i] << "\n";
	}

	//main関数の返却値
	return 0;
}

void ary_copy(int* a,const int* b,int n)
{
	//要素数分繰り返す
	for(int i = 0; i < n; i++) {
		//各要素を代入してコピー
		*a++ = *b++;
	}
}
