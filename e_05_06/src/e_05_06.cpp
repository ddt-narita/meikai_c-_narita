//演習０５－０６
/*int型要素数１５の配列の全要素にランダムな値を入れその数だけ＊を表示
  して棒グラフを作る*/
//
//５月５日
//成田修之
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

int main ()
{
	//ランダムな値を表示するための種を決める
	srand(time(NULL));

	//配列nArrayの要素数
	const int nArrayNumber = 15;
	int nArray[nArrayNumber];

	//各要素に1～10のランダムな値を代入
	for(int i = 0; i < nArrayNumber; i++) {
		nArray[i] = rand() % 11;

		//nArray[i]のiを少なくとも幅2で出力
		cout << "nArray[" << setw(2) << i << "] : ";

		//入力されたランダムな数分＊を表示
		for(int j = 0; j < nArray[i]; j++) {
			cout << '*';
		}
		cout << "\n";
	}
}
