#include<iostream>				//main
using namespace std;			/*list3-10を読み込んだ値が1未満の時改行
								文字を出力しないように変えてプログラムを作成*/
								//
int main(){					//5月2日
								//成田修之
	int n;
	cout<<"何個*を表示しますか：";
	cin>>n;

	//for文を使ってiがnまで増えていく毎に*を表示しているのでn個の*が表示される
	for(int i=0;i<n;i++)
		cout<<'*';

	//nが1以上の時のみ改行文字を出力するようにする
	if(n>=1)
		cout<<'\n';

}
