/* 演習07-04
 * typeid演算子を使って型を表示しlist7-10の関数reverseの仮引数aが
 * 配列ではなくポインタであることを確認
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<typeinfo>
#include<iostream>
using namespace std;

/* 関数reverse
 * 配列の要素を反転して並べ替える関数
 * 引数は配列のポイント型とint型の整数
 * 返却値は無し
 * 作成日：5月15日
 * 作成者：成田修之
 */

void reverse(int a[],int n);


int main()
{
	//配列の要素数
	const int n = 5;
	//要素数5の配列
	int c[n];

	//要素数分繰り返す
	for(int i = 0; i < n; i++) {
		//各要素に入力を促す
		cout << "c [" << i << "]：";
		//キーボードから入力
		cin  >> c[i];
	}
	//関数reverseを呼び出して配列の要素を反転
	reverse(c,n);

	//反転したことを表示
	cout << "要素の並びを反転しました。\n";
	//要素数分繰り返す
	for(int i = 0; i < n; i++) {
		//各要素を表示
		cout << "c[" << i << "] = " << c[i] << "\n";
	}
	//main関数の返却値
	return 0;
}

void reverse(int a[],int n)
{
	//反転なので要素数の半分繰り返す
	for(int i =0;i <n/2; i++) {
		//避難しておくための変数
		int nTrade=a[i];
		//反対側の値を代入
		a[i] = a[n-i-1];
		//避難しておいた値を代入
		a[n-i-1] = nTrade;
	}
	//この関数内の仮引数aの型の情報を確認する
	cout << "関数reverse内の仮引数aの型は"<<typeid(a).name() << "です。\n";
}

