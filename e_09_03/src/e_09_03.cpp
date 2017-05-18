/* 演習09-03
 * xの2乗を求める関数テンプレートを作成
 * 作成日：5月18日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数テンプレートsquare
 * xの2乗を返却する関数テンプレート
 * 引数は各型の実数
 * 返却値はxの2乗
 * 作成日：5月18日
 * 作成者：成田修之
 */

template <class Type> Type square(Type x)
{
	//引数に引数をかけ2乗したものを返却
	return x *= x;
}

int main ()
{
	int nInputA;			//2乗を求めたい値を入力するためのint型変数
	double dblInputB;		//2乗を求めたい値を入力するためのdouble型変数

	//整数値の入力を促す
	cout << "2乗を求めます整数値を入力してください。：";
	//キーボードから入力
	cin  >> nInputA;
	//関数テンプレートsquareを読んで2乗を求めて表示
	cout << "2乗は：" << square(nInputA) << "です。";


	//実数値の入力を促す
	cout << "2乗を求めます実数値を入力してください。：";
	//キーボードから入力
	cin  >> dblInputB;
	//関数テンプレートsquareを読んで2乗を求めて表示
	cout << "2乗は：" << square(dblInputB) << "です。";

	//main関数の返却値
	return 0;

}
