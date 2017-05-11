/* 演習 03-23-01
 * list3-15を平均も求めるように書き換え
 * 作成日：5月3日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之*/
#include<iostream>
using namespace std;

int main(){

	int nNumber;		//何個加算するか入力するために使う変数
	int nSum;			//加算した合計を求めるのに使う変数
	int nInput=1;		//加算する値の入力に使う変数
	int nCount ;		//0を含まない分母となる数の個数

	//何個加算するか入力を促す表示
	cout << "整数を加算します\n";
	cout << "何個加算しますか：";
	//キーボードから入力
	cin >> nNumber;

	//0からnまで繰り返す
	for(nCount = 0; nCount < nNumber && nInput != 0; nCount++){
		//入力する値をループする最初に0にリセット
		nInput = 0;
		//入力を促す表示
		cout << "整数(０で終了)：";
		//キーボードから入力
		cin >> nInput;
		//入力された値を加算して代入
		nSum += nInput;
	}
	//for文を抜けた際に最後に入力した値が0の時
	if(nInput == 0) {
		//それは分母に含めないので
		nCount--;
	}

	//平均は合計を個数で割ったものだから
	cout << "合計は" << nSum <<"で平均は"<< nSum / nCount <<"です。\n";

	//main関数の返却値
	return 0;
}
