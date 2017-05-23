/* 演習08-04
 * list０８－１１の文字列の個数を計算で求めるように書き換え
 * 作成日：5月16日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;
int main()
{
	//配列による3つの文字列が入った2次配列
	char a[][5]	 = {"LISP","C","Ada"};
	//ポインタによる3つの文字列の入った配列
	const char *p[]	 = {"PAUL","X","MAC"};

	int sizeA = sizeof(a) / sizeof(a[0]);		//繰り返しに使う列数を計算する
	int sizeP = sizeof(p) / sizeof(p[0]);		//繰り返しに使う列数を計算する

	//列数分繰り返す
	for(int i =0; i < sizeA; i++) {
		//各列の文字列を表示
		cout << "a[" << i << "] = \"" << a[i] << "\"\n";
	}

	//列数分繰り返す
	for(int i =0; i < sizeP; i++) {
		//各列の文字列を表示
		cout << "p[" << i << "] = \"" << p[i] << "\"\n";
	}

	//main関数の返却値
	return 0;
}
