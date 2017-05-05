#include <ctime>					//main
#include <cstdlib>					//2桁のランダムな数の数当てゲーム
#include <iostream>				//
									//5月2日
using namespace std;				//成田修之

int main(){

	//ランダムな数を生成する種（基準）を設定
	srand(time(NULL));

	//2桁の整数なので0～89の整数をランダムに作った後+10して10～99の整数にする
	int no =rand()%90+10;
	int x;

	cout<<"数当てゲーム開始！\n";
	cout<<"10～99の2桁の整数を当ててください\n";

	//正解するまで続ける
	do{
		cout<<"いくつかな？：";
		cin>>x;

		//入力した数とランダムに作られた2桁の数の関係に応じて表示
		if(x>no)
			cout<<"もっと小さな数だよ。\n";
		else if (x<no)
				cout <<"もっと大きい数だよ。\n";
		}
	//不正解なら繰り返す
	while (x!=no);

	cout<<"正解です！\n";
}
