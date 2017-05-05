#include<iostream>					//main
using namespace std;				/*演習03－08を書き換えて5個表示ごとに
									改行するようにする*/
									//
int main (){						//5月3日
									//成田修之
	int a;

	//正の整数が入力されるまで繰り返す
	do{
		cout <<"何個表示しますか：";
		cin >>a;
	}while(a<0);

	//1ずつ増えるiが5の倍数時のみ改行文字も一緒に出力するようにする。
	for(int i=1;i<=a;i++)
		if(i%5==0)
			cout <<"*\n";
		else
			cout<<"*";
}
