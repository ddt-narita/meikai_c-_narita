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
	double* dblA =new double(0.0);
	double dblB = 0.1;
	double dblC (0.2);
	double dblD = double(0.3);

	cout << fixed << setprecision(1);
	cout << "dblA：" << *dblA << "\n";
	cout << "dblB：" << dblB << "\n";
	cout << "dblC：" << dblC << "\n";
	cout << "dblD：" << dblD << "\n";

	//main関数の返却値
	return 0;
}
