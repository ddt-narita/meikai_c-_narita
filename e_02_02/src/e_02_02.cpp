#include<iostream>						//main
using namespace std;					/*list2-5のelseを
										　else ifに変えたらどうなるか検討*/
										//
int main(){							//５月１日
	int n;								//成田修之
	cout<<"整数値：";
	cin>>n;

	if(n>0)
		cout <<"その値は正です。\n";
	else if(n<0)
		cout <<"その値は負です。\n";

	//list2-5ではelseのみで文へ
	else if(n==0)
		cout <<"その値は０です。\n";
}
//結果：else をelse ifにしても条件が適当であれば結果は変わらない
