/* 演習11-05
 * 日付を読み込んでその曜日を求めて表示するプログラムの作成
 * 作成日：5月22日
 * 作成者：成田修之
 */
#include<iostream>
#include"e_11_05.h"
using namespace std;

int main()
{
	//Date型のオブジェクトを作成（デフォルトコンストラクタで初期化）
	Date week;
	//入力を促す表示
	cout << "曜日を求めます日付を入力してください\n";
	//オブジェクトに日付を入力
	cin  >> week;

	//関数day_of_weekを呼び曜日に応じた変数が返ってくるのでそれに応じて何曜日なのか表示
	switch(week.day_of_week()) {
	//日曜日に応じた0が返ってきたとき
	case 0 : cout << week << "は日曜日です。\n";	break;
	//1の時
	case 1 : cout << week << "は月曜日です。\n";	break;
	//2の時
	case 2 : cout << week << "は火曜日です。\n";	break;
	//3の時
	case 3 : cout << week << "は水曜日です。\n";	break;
	//4の時
	case 4 : cout << week << "は木曜日です。\n";	break;
	//5の時
	case 5 : cout << week << "は金曜日です。\n";	break;
	//6の時
	case 6 : cout << week << "は土曜日です。\n";	break;
	}
	//main関数の返却値
	return 0;
}

