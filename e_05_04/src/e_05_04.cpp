/* 演習05-04
 * 演習05-04を連続する要素が同じ値をとらないように書き換える
 * 作成日：5月5日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//ランダムな値を生成する基準を設定
	srand(time(NULL));

	const int nArrayNumber = 6;		//int型の配列nArrayの要素数
	int nArray[nArrayNumber] = {0};		//int型の配列
	int nRand = 0;						//作成したランダムな値を代入するのに使う変数

	//要素数分繰り返す
	for(int i =0; i < nArrayNumber; i++) {
		//ひとつ前の要素と同じ値の限り続ける
		do {
			//ランダムな値を生成して代入
			nRand =rand() % 10 +1;
		}while(nRand == nArray[i-1]);
		//各要素に代入
		nArray[i] = nRand;
		//各要素を表示
		cout << "nArray[" << i << "] = " << nArray[i] << '\n';
	}
	//main関数の返却値
	return 0;
}
