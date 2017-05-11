/* 演習06-09
 * a以上b未満の乱数を生成しその値を返却する関数randomを作成
 * ただしbがa未満の時はaをそのまま返す
 * 作成日：5月11日
 * 作成者：成田修之
 */
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
/* 関数random
 * a以上b未満のランダムな値を返却、bがa未満の時はaを返却する関数
 * 引数は2つのint型の整数
 * 返却値はa以上b未満のランダムな値か、a
 * 作成日：5月11日
 * 作成者：成田修之
 */
int random(int nInputA,int nInputB)
{
	int nReturn;
	srand (time(NULL));
	if(nInputA > nInputB) {
		nReturn = nInputA;
	} else {
		nReturn = rand() % (nInputB - nInputA) + nInputA;
	}
	return nReturn;
}

int main ()
{
	int nInputA;
	int nInputB;

	cout 	<< "整数A以上整数B未満のランダムな整数を表示します。(整数Bが整数A未満な時は";
	cout 	<< "整数Aを表示します。)\n";
	cout 	<< "整数A：";
	cin 	>> nInputA;
	cout 	<< "整数B：";
	cin 	>> nInputB;

	cout 	<< "";
}
