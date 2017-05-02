//ランダムな値を生成するために上二つのヘッダーをインクルードする
#include<ctime>						//main
#include<cstdlib>						//いろいろなランダムな整数を生成
#include<iostream>						//
										//5月1日
using namespace std;					//成田修之

int main(){

	//ランダムな値を生成するrandの種(基準)を設定
	srand(time(NULL));

	//1桁の正の整数をランダムに生成
	int rucky1 = rand()%9+1;
	cout<<rucky1<<"\n";

	//1桁の負の整数をランダムに生成
	int rucky2 = rand()%9-9;
	cout<<rucky2<<"\n";

	//2桁の正の整数をランダムに生成
	int rucky3 = rand()%90+10;
	cout<<rucky3<<"\n";
}
