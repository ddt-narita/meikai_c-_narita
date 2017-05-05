#include<iostream>				//main
using namespace std;			//正の整数を読み込みそれが５で割り切れるか確認
								//
int main(){					//５月１日
	int x;						//成田修之
	cout<<"整数値:";
	cin>>x;

	//まずxが正か負かを評価
	if (x>0)
		//正ならば5で割ったあまりが０かを評価
		if(x%5==0)
			cout<<"その値は5で割り切れます。\n";
		else
			cout<<"その値は5で割り切れません\n";

	//正でないときは正でないと表示
	else
		cout<<"正でない値が入力されました。\n";

}
