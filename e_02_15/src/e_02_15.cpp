/* 演習 02-15
 * おみくじプログラムの作成
 * 作成日：5月2日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 *  */

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	int nRucky;	//0～6のランダムな値を代入し判定に使う

	//ランダムな値を生成する種を設定
	srand( time(NULL) );

	//0～6の7つの中からランダムな値を作成
	nRucky = rand() % 7;

	//生成された値によってラベルに飛ぶ
	switch(nRucky) {
	//0の時 大吉と表示
	case 0: cout << "大吉\n";		break;
	//1の時 中吉と表示
	case 1: cout << "中吉\n";		break;
	//2の時 小吉と表示
	case 2: cout << "小吉\n";		break;
	//3の時 吉と表示
	case 3: cout << "吉\n";			break;
	//4の時 末吉と表示
	case 4: cout << "末吉\n";		break;
	//5の時 凶と表示
	case 5: cout << "凶\n";			break;
	//6の時 大凶と表示
	case 6: cout << "大凶\n";		break;
	}

	//main関数の返却値0
	return 0;
}
