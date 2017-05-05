#include<iostream>						//main
using namespace std;					//aとbの大小関係を求めて表示
										//
int main(){							//５月１日
	int a;								//成田修之
	int b;

	//aとbに値を入力と表示
	cout<<"整数a：";
	cin >>a;
	cout<<"整数b：";
	cin >>b;

	//aとbの大小関係を表示
	if (a>b)
		cout <<"aのほうが大きいです。\n";
	else if(a<b)
		cout <<"bのほうが大きいです。\n";
	else
		cout <<"aとbは同じ値です。\n";

}
