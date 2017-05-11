/* 演習 02-16
 * 入力された月の季節の判定
 * 作成日：5月2日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	int nMonth;		//月を入力する変数

	//１～１２の数を入力するように促す表示
	cout << "１～１２の整数を入力：";
	//キーボードから入力
	cin >> nMonth;

	//入力された値の月の季節を表示
	//１２や１などラベルのあとbreak文がないのでbreak文があるところまで落ちていく
	switch(nMonth) {
		//break文がないので下へ
		case 12:
		case  1:
		//入力された値が12～2の時 冬と表示
		case  2: cout << "冬";		break;

		//break文がないので下へ
		case  3:
		case  4:
		//入力された値が3～5の時 春と表示
		case  5: cout << "春";		break;

		//break文がないので下へ
		case  6:
		case  7:
		//入力された値が6～8の時 夏と表示
		case  8: cout << "夏";		break;

		//break文がないので下へ
		case  9:
		case 10:
		//入力された値が9～11の時 秋と表示
		case 11: cout << "秋";		break;
	}
	//main関数の返却値0
	return 0;
}
