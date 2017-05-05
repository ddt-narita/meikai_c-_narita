#include<string>					//main
#include<iostream>					//入力した値の正負判断を好きなだけ繰り返す
using namespace std;				//
									//5月2日
int main ()						//成田修之
{

	//繰り返しを行うかの判定に使う文字string型の変数を宣言
	string retry;

	//入力した整数の正負の判定を繰り返す
	do {
		int n;
		cout <<"整数値：";
		cin >>n;

		//判定と表示部分
		if(n>0)
			cout<<"その値は正です\n";
		else if(n<0)
			cout<<"その値は負です\n";
		else
			cout <<"その値は0です\n";

		//繰り返す条件を表示。Yを入力で繰り返し。Nなら終了
		cout<<"もう一度？　Y…Yes / N…No：";
		cin >>retry;

	}//retryに入力されたのがYかyの限り繰り返す
	while(retry == "Y" || retry == "y");
}
