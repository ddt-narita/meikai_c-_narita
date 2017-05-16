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
short absolute(short shtInput);


/* 関数absolute
 * int型整数の絶対値を求める関数
 * 引数はint型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
int absolute(int nInput);

/* 関数absolute
 * long型整数の絶対値を求める関数
 * 引数はlong型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
long absolute(long LInput);

/* 関数absolute
 * float型整数の絶対値を求める関数
 * 引数はfloat型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
float absolute(float fInput);


/* 関数absolute
 * double型整数の絶対値を求める関数
 * 引数はdouble型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */

double absolute(double dblInput);


/* 関数absolute
 * long double型整数の絶対値を求める関数
 * 引数はlong double型の整数
 * 返却値は絶対値
 * 作成日：5月12日
 * 作成者：成田修之
 */
long double absolute(long double LdblInput);



int main()
{


	short shtInput;
	//short型について入力を促す表示
	cout << "short型の入力されたものの2倍の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> shtInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(shtInput);
	cout << "\n";

	int nInput;
	//int型について入力を促す表示
	cout << "int型の入力されたものの3倍の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> nInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(nInput);
	cout << "\n";

	long LInput;
	//long型について入力を促す表示
	cout << "long型の入力されたものの4倍の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> LInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(LInput);
	cout << "\n";

	float fInput;
	//float型について入力を促す表示
	cout << "float型の入力されたものの5倍の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> fInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(fInput);
	cout << "\n";

	double dblInput;
	//double型について入力を促す表示
	cout << "double型の入力されたものの6倍の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> dblInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(dblInput);
	cout << "\n";

	long double LdblInput;
	//long double型について入力を促す表示
	cout << "long double型の入力されたものの7倍の絶対値を求めます、入力してください：";
	//キーボードから入力
	cin  >> LdblInput;
	cout << "絶対値は";
	//関数absoluteを呼び出して絶対値を求める
	cout << absolute(LdblInput);
	cout << "\n";

	//main関数の返却値
	return 0;

}

short absolute(short shtInput)
{
	//2倍して入れ替えたものを返却
	return shtInput > 0 ? 2* shtInput : 2 * -shtInput;
}

int absolute(int nInput)
{
	//3倍して入れ替えたものを返却
	return nInput > 0 ? 3 * nInput : 3 * -nInput;
}

long absolute(long LInput)
{
	//4倍して入れ替えたものを返却
	return LInput > 0 ? 4 * LInput : 4 * -LInput;
}

float absolute(float fInput)
{
	//5倍して入れ替えたものを返却
	return fInput > 0 ? 5 * fInput : 5 * -fInput;
}

double absolute(double dblInput)
{
	//6倍して入れ替えたものを返却
	return dblInput > 0 ? 6 * dblInput : 6 * -dblInput;
}

long double absolute(long double LdblInput)
{
	//7倍して入れ替えたものを返却
	return LdblInput > 0 ? 7 * LdblInput : 7 * -LdblInput;
}
