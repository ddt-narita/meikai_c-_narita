/* 演習06-07
 * 引数mで指定された月の季節を表示する関数print_seasonを作成
 * 作成日：5月11日
 * 作成者：成田修之
 *
 */
#include<iostream>
using namespace std;

/* void関数print_sason
 * 引数で指定された月の季節を表示する
 * 引数は月を指定する1から12のint型の整数
 * 返却値は無し
 * 作成日：5月11日
 * 作成者：成田修之
 */

void print_season(int nMonth);

int main()
{
	int nMonth;		//月を入力するのに使う変数
	//判定する月の入力を促す表示
	cout << "季節を判定します。\n判定する月を入力してください";
	//キーボードから入力
	cin >> nMonth;

	//入力した月の判定を行う関数を呼び出す
	print_season(nMonth);

	//main関数の返却値
	return 0;
}

void print_season(int nMonth)
{
	switch(nMonth) {
	//break文がないので下へ
	case 3:
	case 4:
	//3から5は春であると表示
	case 5: cout << "それは春です。\n"; break;
	//break文がないので下へ
	case 6:
	case 7:
	//6から8は夏であると表示
	case 8: cout << "それは夏です。\n"; break;
	//break文がないので下へ
	case 9:
	case 10:
	//9から11は秋であると表示
	case 11: cout << "それは秋です。\n"; break;
	//break文がないので下へ
	case 12:
	case 1:
	//12から2月は冬と表示
	case 2: cout << "それは冬です。\n"; break;
	}
}
