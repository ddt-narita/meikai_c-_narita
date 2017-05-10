/* 演習 01-14
 * 入力した値の±5のランダムな値を生成する
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之*/

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	//ランダムな値を生成する種を決める
	srand( time(NULL) );

	//±5の数を作るにはその数-5～5の0を含めた11個のうちのランダムな数を生成
	//またrandは正の0～の値しか作らないのでその値から-5すれば-5～5のランダムな
	//値が生成できる
	int rucky = rand() % 11 - 5;

	//キーボードから入力するための変数
	int nInput;

	//入力を促すための表示
	cout	<< "整数値：";
	//キーボードから入力
	cin 	>> nInput;

	//nInputに上で生成したrucky:-5～5の数を加えればいい
	cout	<< "その値の±５の乱数を生成しました。それは";
	cout	<< nInput + rucky << "です。\n";

	//返却値0
	return 0;
}
