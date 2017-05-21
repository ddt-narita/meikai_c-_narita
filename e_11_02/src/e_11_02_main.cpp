/* 演習11-02 メイン部
 * クラスDate第2版に抽出子を追加する
 * 作成日：5月19日
 * 作成者：成田修之
 */

#include<iostream>
#include"e_11_02.h"
using namespace std;

int main()
{
	//Dateクラスtodayをデフォルトでコンストラクトする
	Date today;
	cin  >> today;		//todayに年月日を入力
	cout << today;		//入力された年月日を表示
}
