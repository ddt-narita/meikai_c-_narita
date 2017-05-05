#include<iostream>						//main
using namespace std;					//nが正であれば剰余に応じてそれを表示する
										//
int main(){							//5月1日
	int n;								//成田修之
	cout <<"整数値：";
	cin >>n;

	//nがせいであるかを確認
	if (n>0)
		//nを3で割った剰余に応じて表示される
		if (n%3==0)
			cout <<"その値は3で割り切れます。\n";
		else if (n%3==1)
			cout <<"その値を3で割った剰余は1です。\n";
		else if (n%3==2)
			cout <<"その値を3で割った剰余は2です。\n";
		else ;
	else
		cout << "正でない値が入力されました。\n";

}
