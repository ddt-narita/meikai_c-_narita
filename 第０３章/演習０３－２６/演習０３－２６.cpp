#include<string>
#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main() {
	srand(time(NULL));

	int nHand = rand() % 3;


	cout	<< "じゃんけんゲームを開始します\n";

	for(string strRetry = "Y"; strRetry == "Y" || strRetry == "y"; ) {

		//最初初期化を自分でしなかったため０で入ってしまい下の入力指示を
		//表示しなかったので0～2以外の数で初期化した
		int nInputHand = -1;

		//0～2以外の数字が入力されたとき入力指示を繰り返す
		for(; nInputHand < 0 || nInputHand > 2 ;){
			cout	<< "じゃんけんっ！ グー…０,チョキ…１,パー…２：";
			cin	>> nInputHand;
		}

		//入力した値とランダムな手によって分ける
		switch(nInputHand) {
		 	 //グーの時
		 	 case 0: cout<<"あなた：グー\n私：";
		 		 	  if(nHand == 0) {
		 		 	   	  cout << "グー\nあいこです\n";
		 	 	 	  } else if(nHand == 1) {
		 	 	 		  cout << "チョキ\n勝ちです！\n";
		 	 	 	  } else {
		 	 	 		  cout << "パー\n負けです\n";
		 	 	 	  } break;
		 	 //チョキの時
		 	 case 1: cout << "あなた：チョキ\n私：";
		 		 	  if(nHand == 0) {
		 		 	  	  cout << "グー\n負けです\n";
		 	 	 	  } else if(nHand == 1) {
		 	 	 		  cout << "チョキ\nあいこです\n";
		 	 	 	  } else {
		 	 	 		  cout << "パー\n勝ちです！\n";
		 	 	 	  } break;

		 	 //パーの時
		 	 case 2: cout << "あなた：パー\n私：";
		 		 	  if(nHand ==0) {
		 		 	      cout << "グー\n勝ちです！\n";
		 		 	  } else if(nHand == 1) {
		 		 		  cout << "チョキ\n負けです\n";
		 		 	  } else {
		 		 		  cout << "パー\nあいこです";
		 		 	  } break;
		 }
		 //繰り返すかどうかを表示
		 cout << "もう一度行いますか？　Y…Yes/N…No：";
		 cin >> strRetry;
	}


}
