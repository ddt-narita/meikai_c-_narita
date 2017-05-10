/* 演習 01-09
 * キーボードから読み込んだ値を反復して表示
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月8日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	//キーボードから入力するための変数
	int nInput;

	//入力を促す表示
	cout	<< "整数値：";
	//キーボードから出力してnInputに値を入力
	cin		>> nInput;

	//反復して入力したものを表示
	cout 	<< nInput << "と入力しましたね。\n";

	//返却値0
	return 0;
}
