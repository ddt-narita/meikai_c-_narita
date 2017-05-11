/* 演習 02-12
 * 2つの整数を読み込み大きいほう小さいほうを表示。ただし同じ値なら同じ値だと表示
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

 int main()
 {
	 int nInputA;	//大小を比べるのに使う整数A
	 int nInputB;	//大小を比べるのに使う整数B

	 //整数Aに入力を促す表示
	 cout	<< "整数a：";
	 //キーボードから入力
	 cin 	>> nInputA;
	 //整数Bに入力を促す表示
	 cout	<< "整数b：";
	 //キーボードから入力
	 cin 	>> nInputB;

	 //aとbの値が同じ時
	 if(nInputA == nInputB) {
		 //同じであることを表示
		 cout << "2つの値は同じです。\n";

	 //Aのほうが大きいとき
	 } else if(nInputA > nInputB) {
		 //小さいほうBを表示
		 cout << "小さいほうの値は" << nInputB << "です。\n";
		 //大きいほうAを表示
		 cout << "大きいほうの値は" << nInputA << "です。\n";

	 //Bのほうが大きいとき
	 } else {
		 //小さいほうAを表示
		 cout << "小さいほうの値は" << nInputA << "です。\n";
		 //大きいほうBを表示
		 cout << "大きいほうの値は" << nInputB << "です。\n";
	 }

	 //main関数の返却値0
	 return 0;
 }
