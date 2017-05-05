#include<iostream>				//main
using namespace std;			//list3-4をfor文を使って書き換える
int main(){					//
								//5月2日
	int x;						//成田修之

	cout<<"カウントダウンします。\n";
	do{
		cout<<"正の整数値：";
		cin>>x;
	}while(x<=0);

	//for文条件内の最初はここでは前置きの宣言がないので空白文字で埋める
	for(;x>=0;x--)
		cout<<x<<"\n";
}
