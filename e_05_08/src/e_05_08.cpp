//演習05－08
//配列の要素の並びをシャッフルする
//
//5月6日
//成田修之
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	const int nArrayNumber =7; //要素数
	int nArray[nArrayNumber];

	//各要素にランダムな値を代入して表示
	for(int i = 0; i < nArrayNumber; i++) {
		nArray[i] = rand() %100;
		cout<<"nArray[" << i << "] = " << nArray[i] <<'\n';
	}
	cout << "要素をランダムにシャッフルします\n";

	//ランダムな数を生成し、i番目の要素と生成した数番目の数を入れ替える
	for(int i = 0; i < nArrayNumber; i++) {
		int nRucky = rand() % nArrayNumber;
		int t = nArray[i];
		nArray[i] = nArray[nRucky];
		nArray[nRucky] = t;
	}
	//入れ替えた各要素を表示
	for(int i = 0; i < nArrayNumber; i++) {
		cout<<"nArray[" << i << "] = " << nArray[i] <<'\n';
	}
	return 0;
}
