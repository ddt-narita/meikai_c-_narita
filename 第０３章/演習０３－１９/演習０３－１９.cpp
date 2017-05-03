#include<iostream>
using namespace std;

int main()
{
	//n段の正方形を作るのでｎが正になるまで繰り返す
	int nSquear;
	for( ; nSquear<1; ){
		cout<<"n段の正方形を表示します\nnの値：";
		cin>>nSquear;
	}

	for(int nSquear1 = 1; nSquear1 <= nSquear; nSquear1++ ){
		for(int nSquear2 = 1; nSquear2 <= nSquear; nSquear2++){
			cout << "*";
		}
		cout<<"\n";
	}
}
