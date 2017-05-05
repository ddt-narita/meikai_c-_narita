#include<iostream>					//main
using namespace std;				/*list3-12を約数の表示の後に約数の個数を
									表示するように書き換え*/
									//
int main(){						//5月3日
	int n;							//成田修之
	cout<<"整数値：";
	cin>>n;

	//約数の個数を数える変数ｔの宣言
	int t;

	//list3-12をそのままで約数が見つかったときに変数ｔを
	//インクリメントして約数を数えられるように変更
	for(int i=1 ; i<=n ; i++ )
		if(n%i==0){
			cout<<i<<"\n";
			t++;
		}

	//変数ｔが約数の個数だからそれを表示
	cout<<"約数は"<<t<<"個です。\n";
}
