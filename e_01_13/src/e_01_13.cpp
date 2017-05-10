/* 演習 01-13
 * ランダムな値を生成するために上二つのヘッダーをインクルードする
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 作成者：成田修之
 */

//time-t型で現在の時間を種にするためのものが入っているヘッダ
#include<ctime>
//srand関数の入ったc標準ライブラリのヘッダ
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	//ランダムな値を生成するrandの種(基準)を設定
	srand(time(NULL));

	int nRucky1;	//1桁の正のランダムな整数
	int nRucky2;	//1桁の負のランダムな整数
	int nRucky3;	//2桁の正のランダムな整数


	//1桁の正の整数をランダムに生成
	nRucky1 = rand() % 9 + 1;
	//生成した1桁の正の整数を表示
	cout << nRucky1 << "\n";

	//1桁の負の整数をランダムに生成
	nRucky2 = rand() % 9 - 9;
	//生成した1桁の負の整数を表示
	cout << nRucky2 << "\n";

	//2桁の正の整数をランダムに生成
	nRucky3 = rand() % 90 + 10;
	//生成した2桁の正の整数を表示
	cout << nRucky3 << "\n";

	//返却値0
	return 0;
}
