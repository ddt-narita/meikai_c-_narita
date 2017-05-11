/* 演習 03-26-01
 * じゃんけんゲームを好きなだけ繰り返せるもの
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者；成田修之
 */

#include<string>
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main() {

	//ランダムな値を作る規準を設定
	srand(time(NULL));

	cout << "じゃんけんゲームを開始します\n";

	//Yかｙが入力される限り繰り返す
	//Yで初期化し、初回の時に条件似合うようにする
	//strRetryは繰り返すかどうかでYかｙを入力させるための変数
	for(string strRetry = "Y"; strRetry == "Y" || strRetry == "y"; ) {

		//最初この宣言をfor分の外に出していたため何度繰り返しても相手が同じ手を
		//出すように組んでしまった。
		//手の出し方は３パターンなので３で割った剰余で決める
		int nHand = rand() % 3;

		//最初初期化を自分でしなかったため０で入ってしまい下の入力指示を
		//表示しなかったので0～2以外の数で初期化した
		//出す手を入力するための変数
		int nInputHand = -1;

		//0～2以外の数字が入力されたとき入力指示を繰り返す
		for(; nInputHand < 0 || nInputHand > 2 ;){
			cout	<< "じゃんけんっ！ グー…０,チョキ…１,パー…２：";
			cin		>> nInputHand;
		}

		//入力した値とランダムな手によって分ける
		switch(nInputHand) {
		 	 //入力した値がグーの時
		 	 case 0: cout<<"あなた：グー\n私：";
		 		 switch(nHand) {
		 		  	 //相手がグーの時
		 		 	 case 0: cout << "グー\nあいこです\n";		break;
		 		  	 //相手がチョキの時
		 		 	 case 1: cout << "チョキ\n勝ちです！\n";	break;
		 		  	 //相手がパーの時
		 		 	 case 2: cout << "パー\n負けです\n";		break;
		 		  	} break;
		 	 //チョキの時
		 	 case 1: cout << "あなた：チョキ\n私：";
		 		  switch(nHand)  {
		 		  	 //相手がグー
		 		  	 case 0: cout << "グー\n負けです\n";		break;
		 		  	 //相手がチョキ
		 		  	 case 1: cout << "チョキ\nあいこです！\n";	break;
		 		  	 //相手がパー
		 		  	 case 2: cout << "パー\n勝ちです\n";		break;
		 		  } break;

		 	 //パーの時
		 	 case 2: cout << "あなた：パー\n私：";
		 	 	 switch(nHand) {
		 	 	 	 //相手がグー
		 	 	 	 case 0: cout << "グー\n勝ちです\n";		break;
		 	 	 	 //相手がチョキ
		 	 	 	 case 1: cout << "チョキ\n負けです！\n";	break;
		 	 	 	 //相手がパー
		 	 	 	 case 2: cout << "パー\nあいこです\n";		break;
		 	 	 } break;
		 }

		 //繰り返すかどうかを入力させる
		 cout << "もう一度行いますか？　Y…Yes/N…No：";
		 //キーボードから入力
		 cin >> strRetry;
	}
	//main関数の返却値
	return 0;


}
