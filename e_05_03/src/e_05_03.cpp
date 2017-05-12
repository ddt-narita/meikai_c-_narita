/* 演習05-03
 * int型で要素数６の配列に１～１０のランダムな値を代入する
 * 作成日：5月5日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 * */
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//ランダムな値を生成する基準を設定
	srand(time(NULL));

	const int nArrayNumber = 6;	//int型の配列nArrayの要素数
	int nArray[nArrayNumber];		//int型の配列

	//要素数分繰り返す
	for(int i =0; i < nArrayNumber; i++) {
		//各要素にランダムな値を代入
		nArray[i] = rand() % 10 + 1;
		//各要素を表示
		cout << "nArray[" << i <<"] = " <<nArray[i] << '\n';
	}

	//main関数の返却値
	return 0;
}
