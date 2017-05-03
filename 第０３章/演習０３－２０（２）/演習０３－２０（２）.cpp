//操作子を使うのでヘッダ<iomanip>をインクルード
#include<iomanip>				//main
#include<iostream>				//n段の右下直角三角形を作る
using namespace std;			//
int main(){					//5月3日
								//成田修之
	int nTriungle;
	cout <<"左上直角の三角形を表示します。\n段数は：";
	cin >> nTriungle;


	for(int nTriungle1 = nTriungle; nTriungle1 >0 ; nTriungle1--){
		for(int nTriungle2 = 1; nTriungle2 <= nTriungle; nTriungle2++){
			if((nTriungle2 - nTriungle1) >=0){
				cout<<"*";
			}
			else{
				cout<<' ';
			}
		}
		cout<<'\n';
	}

}
