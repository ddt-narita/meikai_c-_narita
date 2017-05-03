#include<iostream>				//main
using namespace std;			//n段の左上直角三角形を作る
int main(){					//
								//5月3日
	int nTriungle;				//成田修之
	cout <<"左上直角の三角形を表示します。\n段数は：";
	cin >> nTriungle;

	//nTriungleが入力した値から0になるまで繰り返す
	for(;nTriungle>0; nTriungle--){
		//nTriungleの数だけ*を表示する
		for(int nTriungle1 = 1; nTriungle1 <= nTriungle; nTriungle1++){
			cout<<'*';
		}
		//nTriungleが一つデクリメントされる前に改行文字を出力
		cout<<'\n';
	}

}
