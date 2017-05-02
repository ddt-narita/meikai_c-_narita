#include <iostream>					//main
using namespace std;					//3つの整数の最小値
										//
int main(){							//5月1日
	int a,b,c;							//成田修之

	cout <<"整数a：";	cin>>a;
	cout <<"整数b：";	cin>>b;
	cout <<"整数c：";	cin>>c;

	//最小値minにaを初期化子として代入
	int min =a;

	//b,cがminより小さければそれをminとして代入
	if(b<min)
		min=b;
	if(c<min)
		min=c;

	cout <<"最小値は"<<min<<"です。\n";
}
