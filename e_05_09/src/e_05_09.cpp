//演習05－09
//配列aの全要素を配列bに逆順にコピーする
//
//5月6日
//成田修之
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main ()
{
	//ランダムな値を作成する基準を設定
	srand(time(NULL));
	//配列の要素数
	const int nArrayNumber = 5;
	//配列aとｂ
	int nArray[nArrayNumber];
	int nArrayCopy[nArrayNumber];

	//nArray_1にランダムな数を代入して表示
	for(int i=0; i < nArrayNumber; i++) {
		nArray[i] = rand() % 10;
		cout<<"nArray_1[" << i <<"] = " << nArray[i] << "\n";
	}
	cout << "配列を逆順にコピーします。\n";

	//配列を逆順にコピーする nArray_2[nArrayNumber-1]にはnArray_1[i]といったように
	for(int i = 0; i<nArrayNumber; i++) {
		nArrayCopy[i] = nArray[nArrayNumber- i -1];
		//コピーしたものを表示
		cout << "nArrayCopy[" << i << "] = " << nArrayCopy[i] << "\n";
	}

}
