#include<iostream>				//main
using namespace std;			//1～nまでの整数値の2乗を表示する
								//
int main(){					//5月3日
								//成田修之
	int n;

	//1からnまでなのでnが1以上になるまで繰り返す
	do{
		cout<<"nの値：";
		cin>>n;
	}while(n<0);

	//iを１から始めてiとiの2乗を表示する
	for(int i=1 ; i<=n ; i++)
		cout<<i<<"の2乗は"<<i*i<<'\n';
}
