//操作子を使うのでヘッダ<iomanip>をインクルード
#include<iomanip>				//main
#include<iostream>				//n段の右下直角三角形を作る
using namespace std;			//
int main(){					//5月3日
								//成田修之
	int nTriungle;
	cout <<"右下直角の三角形を表示します。\n段数は：";
	cin >> nTriungle;


	//縦(nTriungle1)は入力した値で初期化しデクリメントしていき
	//0になるまで以下を繰り返す
	for(int nTriungle1 = nTriungle; nTriungle1 >0 ; nTriungle1--){

		//横(nTriungle2)は1～nまでインクリメントする間以下を繰り返す
		for(int nTriungle2 = 1; nTriungle2 <= nTriungle; nTriungle2++){

			//横から縦を引いた値が０未満なら空白文字を0以上なら＊を表示する
			if((nTriungle2 - nTriungle1) >=0){
				cout<<"*";
			}
			else{
				cout<<' ';
			}
		}
		//nTriungle1が一つ増える前に改行文字を出力する
		cout<<'\n';
	}

}//最初は操作子を使って作るのかと思ったが＊を表示するごとにその幅で出てきてしまい
 //どうしても思い浮かばず、正方形を作る中でいらないところでは空白文字を出力する
//ようにして代替とした
