/*演習05-01
 * int型の要素数5の配列の要素に先頭から順に5，4，3，2，1、を代入して表示
 * 作成日：5月5日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */
#include<iostream>
using namespace std;
int main()
{

	const int nArrayNumber = 5;	//配列nArrayの要素の数(定数オブジェクト）
	int nArray[nArrayNumber];		//nArrayNumber個の要素を持つ配列nArray

	//各要素にnArrayNumberからカウントダウン
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素に代入
		nArray[i] = nArrayNumber - i;
	}

	//要素の個数分繰り返す
	for(int i = 0; i< nArrayNumber; i++) {
		//各要素を表示する
		cout <<"nArray[" << i << "] = "<< nArray[i] << '\n';
	}

	//main関数の返却値
	return 0;
}
