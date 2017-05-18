/* 演習09-04
 * 2値の最小値を求める関数テンプレートを作成
 * 作成日：5月18日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数テンプレートminof
 * 2値の最小値を求める関数テンプレート
 * 引数は二つの任意の型
 * 返却値は最小値
 * 作成日：5月18日
 * 作成者：成田修之
 */

template <class Type> Type minof(Type x, Type y)
{
	//小さいほうを返却する
	return x > y ? y : x;
}

int main()
{
	int nInputX,nInputY;			//大小を比べたい2つの整数値の入力に使う
	double dblInputX,dblInputY;	//大小を比べたい2つの実数値の入力に使う

	//整数Xの入力を促す
	cout << "整数X：";
	//キーボードから入力
	cin  >> nInputX;
	//整数Yの入力を促す
	cout << "整数Y：";
	//キーボードから入力
	cin  >> nInputY;

	//関数minofを呼び出して最小値を表示
	cout << "2つの整数の最小値は" << minof(nInputX,nInputY) << "です。\n";

	//実数の入力を促す
	cout << "実数X：";
	//キーボードから入力
	cin  >> dblInputX;
	//実数の入力を促す
	cout << "実数Y：";
	//キーボードから入力
	cin  >> dblInputY;

	//関数minofを呼び出し最小値を表示
	cout << "2つの実数の最小値は" << minof(dblInputX,dblInputY) << "です。\n";

	//main関数の返却値
	return 0;
}
