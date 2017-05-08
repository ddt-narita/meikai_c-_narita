//演習０５－０５
//異なる要素が同じ値をとらないように演習０５－０３を書き換え
//
//５月６日
//成田修之
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	const int nArrayNumber = 6;
	int nArray[nArrayNumber];
	int nRucky;

	//生成したランダムな数がnArray[0]～nArray[i-1](i個)と違えばカウントし,それが
	//i個あればnArray[i]にその値を代入して次へ
	//i個未満であればもう一度生成して比較を繰り返す
	for(int i = 0 ; i < nArrayNumber; i++) {

		//i個に以上になるまで繰り返す カウントはi=0の時にも通れるように-1で初期化
		for(int nEqualCount = -1; nEqualCount < i; ) {
			nRucky = rand()% 10 + 1;
			//繰り返す際にカウントを0に戻す
			nEqualCount = 0;

			//nArray[0]～nArray[i-1]と比べる
			for(int j = 0;j < i ;j++) {
				if (nRucky != nArray[j] ){
					nEqualCount ++;
				}
			}
		}
		//カウントがi個以上ならそのランダムに生成した値を代入
		nArray[i] = nRucky;
	}

	//各要素を表示
	for(int k = 0; k < nArrayNumber; k++) {
		cout<<"nArray[" << k << "] = " << nArray[k] <<'\n';
	}
}
