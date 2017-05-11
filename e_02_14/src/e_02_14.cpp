/* 演習 02-14
 * グーチョキパーをランダムに表示
 * 作成日；5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之 */

//ランダムな値を設定する際に時刻を返却するtime関数を含むヘッダ
#include<ctime>
//rand関数を含むc標準ライブラリヘッダ
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	int nHand;	//じゃんけんの手を決めるのに使う変数

	//ランダムな値を生成する種を設定
	srand(time(NULL));

	//０、１，２の3つの中からランダムな数を生成して代入
	nHand = rand() % 3;

	//ランダムに生成されたnHandの値によって分岐
	switch(nHand) {
		//0の時グーを表示
		case 0: cout << "グー\n";		break;
		//1の時チョキを表示
		case 1: cout << "チョキ\n";		break;
		//2の時パーを表示
		case 2: cout << "パー\n";		break;
	}

	//main関数の返却値0
	return 0;

}
