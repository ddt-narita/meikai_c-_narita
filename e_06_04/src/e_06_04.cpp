/*演習06-04
 * 半径ｒの円の面積を求めて返却する関数circ_areaを作成 （円周率は3.14)
 * 作成日：5月9日
 * 作成者：成田修之
 */
#include<iostream>
using namespace std;

/*関数circ_area
 * 半径rの円の面積を求めて返却する
 * 引数はint型整数
 * 返却値はdouble型の面積
 * 作成日：5月9日
 * 作成者：成田修之
 */
double circ_area(int nRadius);

int main()
{
	//半径を求める
	int nRadius;
	//半径の入力を促す表示
	cout << "半径ｒの面積を求めます\n"
			"半径：";
	//キーボードから入力
	cin >> nRadius;

	//面積を表示
	cout << "半径" << nRadius << "の面積は：" << circ_area(nRadius) << "です。\n";

	//main関数の返却値
	return 0;
}

double circ_area(int nRadius)
{
	//πは定数なので定数オブジェクトとして宣言し初期化
	const double dblPI = 3.14;
	//面積を求める（半径＊半径＊π）
	double dblCirc_Area = nRadius * nRadius * dblPI;

	//返却値dblCirc_Areaを返却
	return dblCirc_Area;
}
