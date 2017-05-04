#include<string>
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main() {

	//ランダムな値を作る規準を設定
	srand(time(NULL));

	cout << "じゃんけんゲーム3本勝負開始します\n";


	//自分と相手が勝った回数を数えるのに使う。よって初期値は０
	int i,j = 0;

	//自分が3回かつ(i=3)か相手が3回かつ(j＝3)まで繰り返す
	//繰り返す条件はどちらも3回未満であること
	for( ;i < 3 && j < 3 ; ) {

		//手の出し方は３パターンなので３で割った剰余で決める
		int nHand = rand() % 3;

		//出す手を入力するための変数
		int nInputHand = -1;

		//0～2以外の数字が入力されたとき入力指示を繰り返す
		for(; nInputHand < 0 || nInputHand > 2 ;){
			cout	<< "じゃんけんっ！ グー…０,チョキ…１,パー…２：";
			cin	>> nInputHand;
		}

		//入力した値とランダムな手によって分ける
		switch(nInputHand) {
		 	 //入力した値がグーの時
		 	 case 0: cout<<"あなた：グー\n私：";
		 		 	  if(nHand == 0) {
		 		 	   	  cout << "グー\nあいこです\n";
		 	 	 	  } else if(nHand == 1) {
		 	 	 		  cout << "チョキ\n勝ちです！\n";
		 	 	 		  i++;

		 	 	 	  } else {
		 	 	 		  cout << "パー\n負けです\n";
		 	 	 		  j++;
		 	 	 	  } break;
		 	 //チョキの時
		 	 case 1: cout << "あなた：チョキ\n私：";
		 		 	  if(nHand == 0) {
		 		 	  	  cout << "グー\n負けです\n";
		 		 	  	  j++;
		 	 	 	  } else if(nHand == 1) {
		 	 	 		  cout << "チョキ\nあいこです\n";
		 	 	 	  } else {
		 	 	 		  cout << "パー\n勝ちです！\n";
		 	 	 		  i++;
		 	 	 	  } break;

		 	 //パーの時
		 	 case 2: cout << "あなた：パー\n私：";
		 		 	  if(nHand ==0) {
		 		 	      cout << "グー\n勝ちです！\n";
		 		 	      i++;
		 		 	  } else if(nHand == 1) {
		 		 		  cout << "チョキ\n負けです\n";
		 		 		  j++;
		 		 	  } else {
		 		 		  cout << "パー\nあいこです";
		 		 	  } break;
		}
	}

	//繰り返しが終了したとき自分と相手とどちらが3回勝ったかで分ける
	if(i >= 3){
		cout << "あなたが3回勝ったのであなたの勝ちです\n終了します。\n";
	} else {
		cout << "あなたは3回負けたので私の勝ちです\n終了します。\n";
	}

}
