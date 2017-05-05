#include<iostream>				//main
using namespace std;			/*list3-6を読み込んだ値が1未満の時改行文字を
								出力しないように書き換える*/
								//
int main (){					//5月2日
								//成田修之
	int n;
	cout<<"何個*を表示しますか：";
	cin>>n;

	int i=0;

	//個数は１から表示だがiは0からなのでiの値がnより小さい
	//限りiを1ずつ増やしてその都度*を表示すればn個の*を表示できる
	while (i<n){
		cout<<'*';
		i++;
		}

	//1未満の時改行文字表示しない→1以上の時のみ改行文字を表示する
	if(n>=1)
	cout<<"\n";
}
