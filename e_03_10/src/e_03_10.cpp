#include<iostream>				//main
using namespace std;			//入力した正の値まで0からカウントアップする
								//
int main(){					//5月2日
								//成田修之
	int x;

	cout<<"カウントアップします。\n";

	do{
		cout<<"正の整数値：";
		cin>>x;
	}while(x<=0);

	//前の問と違いカウントアップなのでxとは違った変数の宣言が必要
	//iを0で初期化して、iを表示後1増やすをx以下の間繰り返す
	for(int i=0 ; i<=x ;i++ )
		cout<<i<<"\n";
}
