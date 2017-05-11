/* 演習 03-24
 * list3-17を平均も求めるように作成。ただし負の数の個数は平均を求めるときの分母から除外
 * 作成日：5月3日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main (){

	int nCount;		//加算する個数を入力するのに使う変数
	//何個加算するか入力を促す表示
	cout << "整数を加算します\n";
	cout << "何個加算しますか：";
	//キーボードから入力
	cin >> nCount;


	int nCountPlus;		//正の数だけを数えるものを宣言
	int nSum = 0;		//合計を求めるのに使う変数
	int nInput;			//入力するのに使う変数

	//入力された値まで繰り返す
	for(int i = 0; i < nCount; i++){
		//繰り返すたびに0でリセット
		nInput=0;
		//入力を促す
		cout << "整数：";
		//キーボードから入力
		cin >> nInput;
		//入力された値が負の時
		if(nInput < 0) {
			//加算しないことを明示
			cout << "\a負の数は加算しません。\n";
		//入力された値が負でないとき
		} else {
		//加算して代入
		nSum += nInput;
		//continue文を通った時(負の数)には加算されない
		nCountPlus++;
		}
	}
	//平均は合計を個数で割ったものなので
	cout << "合計は" << nSum << "で平均は" << nSum/nCountPlus << "です。\n";

	//main関数の返却値0
	return 0;

}
