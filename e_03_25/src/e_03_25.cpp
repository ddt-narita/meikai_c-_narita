/* 演習03-25
 * list3-3の数当てゲームに回数制限を設け回数以内にこたえられなかったら答えを
 * 表示して終了するプログラムを作成する
 * 作成日：5月3日
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
	//ランダムな数を生成する種を設定
	srand(time(NULL));


	int nNumber = rand() %100;	//0から99のランダムな数を生成
	int nInputNumber;			//入力に使う変数

	cout << "数当てゲームを開始！！\n";
	cout << "0～99の数を10回以内当ててください\n";

	//数当てを１０回繰り返すか正解するまで続ける
	for(int i = 0; i < 10 && nInputNumber != nNumber; i++) {
		//入力を促す
		cout << "いくつかな：";
		//キーボードから入力
		cin >>nInputNumber;

		//入力した値が大きいとき
		if(nInputNumber > nNumber) {
			//そのことを表示
			cout << "もっと小さい数だよ。\n";
		//小さいとき
		} else if(nInputNumber < nNumber) {
			//そのことを表示
			cout << "もっと大きい数だよ。\n";
		}
	}
	//繰り返しが終わったときに正解ではなかったとき
	if(nInputNumber != nNumber) {
		//正解を表示
		cout << "回数以内に正解できませんでした\n答えは：" << nNumber << "です\n";
	//正解だった時
	} else {
		//正解だと表示
		cout << "正解です！\n";
	}

	//main関数の返却値
	return 0;
}
