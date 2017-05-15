/* 演習06-18
 * 0以上9以下の乱数を返却する関数。複数回呼び出されたとき連続して同じ値を返さないように作成
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

/* 関数rand1
 * 0以上9以下の乱数を返却する。複数回呼び出されたとき連続して同じ値を返さないようにする
 * 引数は無し
 * 返却値は連続で同じ値をとらない0以上9以下の値
 * 作成日：5月12日
 * 作成者：成田修之
 */



int rand1()
{
	srand(time(NULL));
	static int nRandA = -2;
	int nRandB;

	do{
		nRandB = rand() % 10;
	}while(nRandA == nRandB);

	nRandA = nRandB;

	return nRandB;
}

int main()
{


	cout << "連続して同じ値とならないように0から9のランダムな数字を表示します。";
	cout << "いくつ表示しますか：";


	for(int i = 0; i < 1999; i++) {
		cout << rand1();

	}

	return 0;
}
