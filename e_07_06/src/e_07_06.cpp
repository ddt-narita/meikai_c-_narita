/* 演習07-06
 * 要素数nの配列aの全要素数の合計を求めて返却する関数sum_ofの作成
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数sum_of
 * 要素数nの配列aの全要素数の合計を求めて返却する関数
 * 引数はconstポイント型とint型
 * 返却値は配列aの全要素の合計
 * 作成日：5月15日
 * 作成者：成田修之
 */

int sum_of(const int a[],int n);



int main()
{
	//配列nArrayの要素数
	const int nArrayNumber = 6;
	//要素数nArrayNumberの配列
	int nArray[nArrayNumber];

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素への入力を促す表示
		cout << "nArray[" << i << "]：";
		//各要素にキーボードから入力
		cin >> nArray[i];
	}

	//関数sum_ofを呼び出し全要素の合計を表示
	cout << "配列nArrayの全要素の合計は" << sum_of(nArray,nArrayNumber) << "です。\n";

	//main関数の返却値
	return 0;
}


int sum_of(const int a[],int n)
{
	//返却に使う合計を求める変数
	int nSum;
	//要素数分繰り返す
	for(int i = 0; i < n; i++) {
		//合計に足していく
		nSum += a[i];
	}
	//配列の合計を返却
	return nSum;
}
