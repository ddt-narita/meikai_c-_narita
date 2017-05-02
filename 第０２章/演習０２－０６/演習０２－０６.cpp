#include<iostream>						//main
using namespace std;					//点数に応じて判定を出す
										//
int main (){							//5月1日
										//成田修之
	//キーボードから点数を入力
	int t;
	cout <<"点数を判定します。\n何点ですか：";
	cin>>t;


	//点数に応じて判定 &&は"かつ"の意味
	if( t>=0 && t<=59)
		cout <<"不可\n";
	else if ( t>=60 && t<=69 )
		cout <<"可\n";
	else if ( t>=70 && t<=79 )
		cout <<"良\n";
	else if ( t>=80 && t<=100 )
		cout <<"優\n";

}
