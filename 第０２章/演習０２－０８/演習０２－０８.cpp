#include<iostream>					//main
using namespace std;				//2つの整数の値の差を表示する
									//
int main(){						//5月1日
									//成田修之
	int a,b;

	cout <<"整数a:";	cin>>a;
	cout <<"整数b:";	cin>>b;

	//aが大きければa-bで、bのほうが大きければb-aで差を求める
	int s = a>b?a-b:b-a;

	cout <<"2つの整数の差は"<<s<<"です。\n";

}
