/* 演習 04-05
 * float型とdouble型の変数を読み込んで表示する。様々な値を読み込んで検証
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	float f;	//float型の変数
	double d;	//double型の変数
	//float型変数に値を入力する
	cout << "float型の数値：";
	//キーボードから入力
	cin >> f;
	//double型変数に値を入力する
	cout << "double型の数値：";
	//キーボードから入力
	cin >> d;

	//入力した値を精度(30)で表示する
	cout << "表示します\n";
	//float型
	cout << "float型：" << setprecision(30) << f <<'\n';
	//double型
	cout << "double型：" << setprecision(30) << d << '\n';

	//main関数の返却値
	return 0;
}
/* float型の数値：123456789.123456789
double型の数値：123456789.123456789
表示します
float型：123456792
double型：123456789.123456791043281555176
こういった結果になったことから正確に表せるのはその型の大きさからfloat型は8桁、
double型は17桁までなのだということがわかった。*/
