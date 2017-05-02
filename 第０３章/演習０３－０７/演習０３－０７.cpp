#include <iostream>				//main
using namespace std;				//正の整数を読み込んでその桁数を表示する
									//
int main(){						//5月2日
									//成田修之
	int x;

	//xに正の値が入力されるまで繰り返す
	do{
		cout<<"正の整数値:";
		cin>>x;
	}while(x<=0);

	int i=0;

	//xを10で何回割れるかを数えればその数の桁数がわかる
	while(x>=1){

		x/=10;
		i++;
	}

	//iで数えたのでiが桁数
	cout<<"その値は"<<i<<"桁です。\n";
}
