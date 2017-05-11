/* 演習 02-09
 * 読みこんだ2つの整数の差が10以下かどうかの表示
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新日：成田修之
 */


#include <iostream>
using namespace std;
int main()
{

	int nInputA;	//キーボードから入力し差を求めるための変数A
	int nInputB;	//キーボードから入力し差を求めるための変数B
	int nDif;		//AとBの差を求めて代入するのに使う変数

	//変数Aに入力を促す表示
	cout 	<< "整数A：";
	//キーボードから入力
	cin 	>> nInputA;
	//変数Bに入力を促す表示
	cout 	<< "整数B：";
	//キーボードから入力
	cin 	>> nInputB;

	//差nDifをa>bならa-bで、a<bならb-aで求める
	nDif = nInputA > nInputB ? nInputA - nInputB : nInputB -nInputA ;

	//求めた差が10以下の時
	if (nDif <= 10) {
		//10以下であることを表示
		cout << "それらの差は10以下です。\n";
	}
	//それ以外の場合
	else {
		//11以上であることを表示
		cout << "それらの差は11以上です。\n";
	}

	//main関数の返却値0
	return 0;
}
