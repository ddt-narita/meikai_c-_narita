/* 演習07-15
 * double型のオブジェクトを生成して0.0で初期化するプログラムを作成
 * 作成日：5月16日
 * 作成者：成田修之
 */

#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	//動的記憶域期間について初期化
	double* dblA =new double(0.0);
	//通常初期化
	double dblB = 0.1;
	//new演算子と似た形の初期化
	double dblC (0.2);
	//キャスト記法の初期化
	double dblD = double(0.3);

	//小数点以下を1桁で表示する
	cout << fixed << setprecision(1);
	//動的記憶域期間について確認
	cout << "dblA：" << *dblA << "\n";
	//通常初期化について確認
	cout << "dblB：" << dblB  << "\n";
	//new演算子と似た形の初期化について確認
	cout << "dblC：" << dblC  << "\n";
	//キャスト記法の初期化について確認
	cout << "dblD：" << dblD  << "\n";

	//
	delete dblA;

	//main関数の返却値
	return 0;
}
