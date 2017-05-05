//Exercise 05-03
//int型で要素数６の配列に１～１０のランダムな値を代入する
//
//５月５日
//成田修之
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//ランダムな値を生成する基準を設定
	srand(time(NULL));

	//int型の配列nArrayの要素数
	const int nArrayNumber = 6;
	int nArray[nArrayNumber];

	//各要素に毎回ランダムな値を生成し代入
	for(int i =0; i < nArrayNumber; i++) {
		nArray[i] = rand() % 10 + 1;
		cout << "nArray[" << i <<"] = " <<nArray[i] << '\n';
	}
}
