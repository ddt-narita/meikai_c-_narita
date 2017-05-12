/* 演習05－08
 * 配列の要素の並びをシャッフルする
 * 作成日：5月6日
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
	//ランダムな値を生成する種を設定
	srand(time(NULL));

	const int nArrayNumber =7; //要素数
	int nArray[nArrayNumber];	//int型の配列

	//要素数分繰り替えす
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素にランダムな値を代入
		nArray[i] = rand() %100;
		//各要素を表示
		cout<<"nArray[" << i << "] = " << nArray[i] <<'\n';
	}
	//シャッフルすることを明示
	cout << "要素をランダムにシャッフルします\n";

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素をどこと入れ替えるかランダムな値を生成し代入
		int nRucky = rand() % nArrayNumber;

		//その時のiの要素を避難させる
		int nTrade = nArray[i];
		//iに生成したランダムな値個目の要素の値を代入
		nArray[i] = nArray[nRucky];
		//避難させていたiの要素をランダムな値個目に代入する
		nArray[nRucky] = nTrade;
	}
	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素を表示
		cout<<"nArray[" << i << "] = " << nArray[i] <<'\n';
	}
	//main関数の返却値
	return 0;
}
