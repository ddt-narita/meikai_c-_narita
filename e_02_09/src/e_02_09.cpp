#include <iostream>				//main
using namespace std;				//読み込んだ2つの整数の差が10以下かどうか表示
									//
int main(){						//5月1日
	int a,b;						//成田修之

	cout <<"整数A：";	cin >>a;
	cout <<"整数B：";	cin >>b;

	//差sをa>bならa-bで、a<bならb-aで求める
	int s = a > b ? a-b : b-a ;

	//求めた差が10以下か同課で判別する。
	if (s<=10)
		cout <<"それらの差は10以下です。\n";
	else
		cout <<"それらの差は11以上です。\n";

}
