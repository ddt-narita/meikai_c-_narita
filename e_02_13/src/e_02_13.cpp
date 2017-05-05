#include<iostream>					//main
using namespace std;				//2つの整数を大きい順にソートする
									//
int main (){						//5月1日
									//成田修之
	int a,b;

	cout <<"整数値a：";		cin>>a;
	cout <<"整数値b：";		cin>>b;

	//a<bの時、bの値がaになるようにtを使って値の交換
	if(a<b){
		int t = a;
		a=b;
		b=t;
	}
	cout <<"a≧bとなるようにソートしました。\n";
	cout <<"整数値aは"<<a<<"です。\n";
	cout <<"整数値bは"<<b<<"です。\n";

}
