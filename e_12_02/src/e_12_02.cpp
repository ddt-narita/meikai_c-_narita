/* 演習12-02
 * クラスbooleanに対してvがFalseならbool型のtrueを、trueならbool型のfalseを
 * 返却する演算子関数！の追加
 * 作成日：5月23日
 * 作成者：成田修之
 */

#include<iostream>
#include"e_12_02.h"

using namespace std;

//2つの整数が等しいか、等しければBoolean型のTrue値がければBoolean型のFalseを返却する関数
Boolean int_eq(int x,int y)
{
	//評価して返却
	return x == y;
}

int main()
{
	const int BoolArrayNumber = 8;
	int n;				//整数値を入力するための変数
	Boolean a;			//デフォルトコンストラクタでFalseで初期化されたオブジェクト
	Boolean b = a;		//コピーインストラクタでaで初期化されたオブジェクト
	Boolean c = 100;	//変換関数で0でないのでTrueで初期化されたオブジェクト
	Boolean x[BoolArrayNumber];		//デフォルトコンストラクタで初期化されたオブジェクトの配列

	//整数の入力を促す
	cout << "整数値：";
	//キーボードから入力
	cin  >> n;
	//同値かどうかを関数int_eqを読んでBoolean型で返却されたものを代入
	x[0] = int_eq(n,5);
	//入力された値が3と等しいかBoolean型で代入
	x[1] = (n != 3);
	//Boolean型でFalseを代入
	x[2] = Boolean::False;
	//0ではないので変換関数によってTrueを代入
	x[3] = 1000;
	//Boolean型でTrueを代入
	x[4] = c == Boolean::True;

	//aをint型にキャストして表示
	cout << "aの値：" << int(a) << "\n";
	//bをconst char*型に静的キャストして表示（変換関数によって"False"か"True"が表示）
	cout << "bの値：" << static_cast<const char*>(b) << "\n";

	//オブジェクトの配列の要素数分繰り返す
	for(int i = 0; i < BoolArrayNumber; i++) {
		//各要素を表示
		cout << "x[" << i << "] = " << x[i] << " 	";
		//また各要素がFalseであればYes,ちがうならばNoを表示する
		cout << "Falseである：";
		//演算子関数！を用いてbool型のtrueが返ってきたとき
		if(!x[i]) {
			//それがFalseであることを表示
			cout << "Yes\n";
		//bool型のfalseが返ってきたとき
		} else {
			//それがFalseでないことを表示
			cout << "No\n";
		}
	}

	//main関数の返却値
	return 0;
}
