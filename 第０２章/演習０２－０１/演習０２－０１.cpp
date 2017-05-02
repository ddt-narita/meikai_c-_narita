#include<iostream>					//main
using namespace std;				//入力された値の絶対値を求める
									//
int main(){						//5月１日
	int x;							//成田修之
	cout<<"整数値：";
	cin>>x;

	//xの値が正ならそのまま負なら符号を変えてその値を表示
	if(x>0)
		cout<<"その絶対値は"<<x<<"です。\n";
	else
		cout<<"その絶対値は"<<-x<<"です。\n";
}
