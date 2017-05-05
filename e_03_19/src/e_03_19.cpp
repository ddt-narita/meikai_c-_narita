#include<iostream>						//main
using namespace std;					//n段の正方形を作る
										//
int main()								//5月3日
{										//成田修之
	//n段の正方形を作るのでｎが正になるまで繰り返す
	int nSquear;
	for( ; nSquear<1; ){
		cout<<"n段の正方形を表示します\nnの値：";
		cin>>nSquear;
	}

	//nSquear1が1～nまでの間以下を繰り返す
	for(int nSquear1 = 1; nSquear1 <= nSquear; nSquear1++ ){

		//nSquear2が1～nの間＊を表示を繰り返す
		for(int nSquear2 = 1; nSquear2 <= nSquear; nSquear2++){
			cout << "*";
		}
		//nSquear2が表示を繰り返し終わりnSquear1が一つ直前に改行文字を出力する
		cout<<"\n";
	}
}
