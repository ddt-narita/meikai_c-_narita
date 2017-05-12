/* 演習05-06
 * int型要素数１５の配列の全要素にランダムな値を入れその数だけ＊を表示して棒グラフを作る
 * 作成日：5月5日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */

//操作子を使うためのヘッダ
#include<iomanip>
//現在時間について含むヘッダ
#include<ctime>
//rand関数を含むヘッダ
#include<cstdlib>
#include<iostream>
using namespace std;

int main ()
{
	//ランダムな値を表示するための種を決める
	srand(time(NULL));

	const int nArrayNumber = 15;	//配列nArrayの要素数
	int nArray[nArrayNumber];		//int型の配列

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//ランダムな値を生成し代入
		nArray[i] = rand() % 11;

		//nArray[i]のiを少なくとも幅2で出力
		cout << "nArray[" << setw(2) << i << "] : ";

		//各要素に代入されたランダムな値分繰り返す
		for(int j = 0; j < nArray[i]; j++) {
			//アスタリスクを表示する
			cout << '*';
		}
		//要素ごとに改行する
		cout << "\n";
	}
	//main関数の返却値
	return 0;
}
