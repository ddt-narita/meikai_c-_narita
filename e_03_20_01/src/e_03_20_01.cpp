#include<iostream>				//main
using namespace std;			//n段の左上直角三角形を作る
int main(){					//
								//5月3日
	int nTriungle;				//成田修之
	cout <<"左上直角の三角形を表示します。\n段数は：";
	cin >> nTriungle;

	//nTriungleが入力した値から0になるまで繰り返す
	for(int nTriungle1 = nTriungle; nTriungle1>0; nTriungle1--){
		//nTriungleの数だけ*を表示する
		for(int nTriungle2 = 1; nTriungle2 <= nTriungle1; nTriungle2++){
			cout<<'*';
		}
		//nTriungleが一つデクリメントされる前に改行文字を出力
		cout<<'\n';
	}

}
