/*演習 01-11
 * キーボードから読み込んだ実数値の合計と平均
 *作成日：5月1日
 *作成者：成田修之
 *更新日：5月8日
 *更新日：成田修之 */
#include<iostream>
using namespace std;

int main()
{
	double nInput_1;	//実数で入力する変数1
	double nInput_2;	//実数で入力する変数2

	//nInput_1に入力を促す
	cout	<< "nInput_1の値：";
	//キーボードから入力
	cin 	>> nInput_1;

	//nInput_2に入力を促す表示と入力
	cout 	<< "nInput_2の値：";
	//キーボードから入力
	cin 	>> nInput_2;

	//キーボードから入力された値の合計を表示
	cout 	<< "合計は" << nInput_1 + nInput_2 			<< "です。\n";
	//double型なので平均に実数が表示されることの確認
	cout 	<< "平均は" << (nInput_1 + nInput_2) / 2 	<< "です。\n";

	//返却値０
	return 0;
}
