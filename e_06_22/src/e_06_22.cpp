/* 演習06-22
 * 2乗を求めるインライン関数、3条を求めるインライン関数を作成
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数square
 * 2乗を求める
 * 引数はdouble型の実数
 * 返却値はdouble型の実数
 * 作成日：5月12日
 * 作成者：成田修之
 */

inline double square(double dblInput)
{
	return dblInput * dblInput;
}

/* 関数cube
 * 3条を求める
 * 引数はdouble型の実数
 * 返却値はdouble型の実数
 * 作成日：5月12日
 * 作成者：成田修之
 */

inline double cube(double dblInput)
{
	return dblInput * dblInput * dblInput;
}

int main()
{
	double dblInput;

	cout << "2乗と3乗を求めます。入力してください：";
	cin  >> dblInput;

	cout << "2乗は" << square(dblInput) << "3乗は" << cube(dblInput);

	return 0;
}
