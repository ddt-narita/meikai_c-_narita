#include<iostream>					//main
using namespace std;				//入力された3つの整数の中央値を表示
									//
int main(){						//5月1日
	int a,b,c;						//成田修之

	cout <<"整数値a：";		cin>>a;
	cout <<"整数値b：";		cin>>b;
	cout <<"整数値c：";		cin>>c;

	//中央値をあらかじめint型で宣言しておく
	int center=a;

	//a>bの時とa<bの時、数直線上でcがどの位置にいるかで分けて考える
	if (a>b)
		if(b>c)
			center=b;
		else if(a>c)
			center=c;

	if(a<b)
		if(b<c)
			center=b;
		else if (a<c)
			center=c;
cout <<"中央値は"<<center<<"です。\n";
}
