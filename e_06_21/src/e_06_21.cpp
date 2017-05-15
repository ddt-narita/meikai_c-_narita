/* 演習06-21
 * short型整数の絶対、int型整数の絶対値…を求める多重定義された関数群を作成
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iomanip>
#include<iostream>
using namespace std;

/* 関数absolute
 * short型整数の絶対値を求める関数
 * 引数はshort型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
short absolute(short shtInput)
{
	return shtInput > 0 ? shtInput : -shtInput;
}

/* 関数absolute
 * int型整数の絶対値を求める関数
 * 引数はint型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
int absolute(int nInput)
{
	return nInput > 0 ? nInput : -nInput;
}

/* 関数absolute
 * long型整数の絶対値を求める関数
 * 引数はlong型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
long absolute(long LInput)
{
	return LInput > 0 ? LInput : -LInput;
}

/* 関数absolute
 * float型整数の絶対値を求める関数
 * 引数はfloat型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
float absolute(float fInput)
{
	return fInput > 0 ? fInput : -fInput;
}

/* 関数absolute
 * double型整数の絶対値を求める関数
 * 引数はdouble型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */

double absolute(double dblInput)
{
	return dblInput > 0 ? dblInput : -dblInput;
}

/* 関数absolute
 * long double型整数の絶対値を求める関数
 * 引数はlong double型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
long double absolute(long double LdblInput)
{
	//入れ替えたものを返却
	return LdblInput > 0 ? LdblInput : -LdblInput;
}


int main()
{


	short shtInput;
	//short型について入力を促す表示
	cout << "short型の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> shtInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(shtInput);
	cout << "\n";

	int nInput;
	//int型について入力を促す表示
	cout << "int型の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> nInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(nInput);
	cout << "\n";

	long LInput;
	//long型について入力を促す表示
	cout << "long型の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> LInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(LInput);
	cout << "\n";

	float fInput;
	//float型について入力を促す表示
	cout << "float型の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> fInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(fInput);
	cout << "\n";

	double dblInput;
	//double型について入力を促す表示
	cout << "double型の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> dblInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(dblInput);
	cout << "\n";

	long double LdblInput;
	//long double型について入力を促す表示
	cout << "long double型の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> LdblInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(LdblInput);
	cout << "\n";

	//main関数の返却値
	return 0;

}
