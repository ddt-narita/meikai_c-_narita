#include<ctime>					//main関数
#include<cstdlib>					//入力した値の±５のランダムな値を生成する
#include<iostream>					//
									//5月1日
using namespace std;				//成田修之

int main(){

	srand(time(NULL));

	//±５の数を作るにはその数-5～5の０を含めた11個のうちのランダムな数を生成
	//またrandは正の０～の値しか作らないのでその値から-5すれば-5～5のランダムな
	//値が生成できる
	int rucky= rand()%11-5;

	int x;

	cout<<"整数値：";
	cin >> x;

	//xに上で生成した-5～5の数を加えればいい
	cout<<"その値の±５の乱数を生成しました。それは"<<x+rucky<<"です。\n";

}
