/* 演習06-14
 * a,bを昇順にソートする関数sortを作成
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数sort
 * AとBを昇順にソートする
 * 引数はint型の2つの整数
 * 返却値は無し
 * 作成日：5月12日
 * 作成者：成田修之
 */

void sort(int& nSampleA, int& nSampleB);


int main()
{
	int nSampleA;	//入力しソートするのに使う変数A
	int nSampleB;	//入力しソートするのに使う変数B

	//整数Aに入力を促す表示
	cout 	<< "整数A：";
	//キーボードから入力
	cin 	>> nSampleA;
	//整数Bに入力を促す表示
	cout 	<< "整数B：";
	//キーボードから入力
	cin 	>> nSampleB;

	//入力された2つの整数をソートすることを明示
	cout 	<< "A≦Bとなるようにソートします。\n";

	sort(nSampleA,nSampleB);

	//整数Aの値を表示
	cout 	<< "整数A：" << nSampleA << "\n";
	//整数Bの値を表示
	cout	<< "整数B：" << nSampleB << "\n";

	//main関数の返却値
	return 0;
}


void sort(int& nSampleA, int& nSampleB)
{
	//AがBより大きいとき
	if(nSampleA > nSampleB) {
		//避難用のnTradeにAの値を代入
		int nTrade = nSampleA;
		//Aに小さい値が入ったBの値を代入
		nSampleA = nSampleB;
		//Bに大きい値が避難してあったnTradeの値を代入する
		nSampleB = nTrade;
	}
}

