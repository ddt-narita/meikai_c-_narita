//演習０５－０１
//int型の要素数5の配列の要素に先頭から順に5，4，3，2，1、を代入して表示
//
//5月5日
//
#include<iostream>
using namespace std;
int main()
{
	const int nArrayNumber = 5;	//配列nArrayの要素の数(最初の提出時定数オブジェクト
									//にしなくてもできてしまいそれで提出してしまった

	int nArray[nArrayNumber];	//nArrayNumber個の要素を持つ配列nArray

	//各要素にnArrayNumberからカウントダウンして代入
	for(int i = 0; i < nArrayNumber; i++) {
		nArray[i] = nArrayNumber - i;
	}

	//各配列の要素を表示
	for(int i = 0; i< nArrayNumber; i++) {
		cout <<"nArray[" << i << "] = "<< nArray[i] << '\n';
	}
}
