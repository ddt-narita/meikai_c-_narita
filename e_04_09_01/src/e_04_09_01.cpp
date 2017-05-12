
/* 演習 04-09-01 キャスト記法
 * 読み込んだ3つの整数の合計と平均を表示する。キャスト記法、関数的記法、
 * static_cast演算子を使ったものをそれぞれ作る
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 * */

#include<iostream>
using namespace std;
int main()
{
	int nInputA, nInputB, nInputC =0; //入力する整数A,B,C

	//合計と平均を求めることを明示
	cout << "3つの整数の合計と平均を求めます\n";
	//入力を促す
	cout << "整数A：";
	//キーボードから入力
	cin >> nInputA;
	//入力を促す
	cout << "整数B：";
	//キーボードから入力
	cin >> nInputB;
	//入力を促す
	cout << "整数C：";
	//キーボードから入力
	cin >> nInputC;

	//A～Cまでの合計
	int nSum = nInputA + nInputB +nInputC;
	//A～Cの平均 (キャスト記法でnSumを実数に変換)
	double dAve = (double)nSum / 3;

	//合計を表示
	cout << "合計は：" << nSum << '\n';
	//平均を表示
	cout << "平均は：" << dAve << '\n';

	//main関数の返却値
	return 0;
}
