/* 演習09-02
 * 2つの整数値xとyの最大公約数をユークリッドの互除法を用いて求める関数
 * 作成日：5月18日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数gcd
 * 2つの整数値の最大公約数をユークリッドの互除法によって求める関数
 * 引数は2つのint型
 * 返却値は2つの整数の最大公約数
 * 作成日：5月18日
 * 作成者：成田修之
 */

int gcd(int x,int y)
{
	//返却する最大公約数を代入するため
	int nDivisor;

	if(x != 0 && y != 0){
		//xがyより大きいとき
		if(x > y){
			//xをyで割った剰余を代入
			x = x % y;
			//関数gcdを再帰呼び出し
			gcd(x,y);

		//yのほうが大きいとき
		} else if(x < y) {
			//yをxで割った剰余を代入
			y = y % x;
			//関数gcdを再帰呼び出し
			gcd(x,y);
		}
	}else {
		nDivisor = x > y ? x : y;
	}



	//最大公約数を返却
	return nDivisor;
}

int main()
{
	int nInputX =88;	//公約数を求めたい値を入力するため
	int nInputY = 40;	//公約数を求めたい値を入力するため



	//関数gcdを呼び出して公約数を求める
	cout << "二つの入力された値の最大公約数は" << gcd(nInputX,nInputY) << "です。\n";

	//main関数の返却値
	return 0;
}
