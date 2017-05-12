/* 演習06-19
 * list06-21の関数rを不正な添字に対して安全に動作するようにする
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数r
 * list06-21を不正な添え字に対して安全に動作するものに静的記憶期間を持つint型の変数を
 * 関数内部で定義しidxが0以上a_size未満でなければその変数への参照を返却する。
 * 引数は1つのint型の変数
 * 返却値
 * 作成日：5月12日
 * 作成者：成田修之
 */

const int a_size = 5;	//静的記憶期間を持つ変数

int& r(int idx)
{

	static int nSafety;		//静的記憶期間を持つ変数
	static int a[a_size];		//静的記憶期間を持つ配列

	//idxが0以上a_size未満でない時
	if(idx >=a_size || idx <0) {
		return nSafety;
	//idxが0以上a_size未満の時
	} else {
		return a[idx];
	}
}


int main()
{
	//a_sizeまで繰り返す
	for(int i = 0; i < 9; i++) {
		//関数rを呼び出して返却された参照の配列に代入する
		r(i) =i;
	}

	//a_sizeまで繰り返す
	for(int i = 0; i < 9; i++) {
		//関数rを呼び出して参照の配列の各要素を表示
		cout << "r(" << i << ") = " << r(i) << "\n";
	}
	//main関数の返却値
	return 0;
}

/* iをa_size以上にして呼び出したところa_sizeを超える時には参照の変数に代入が
 * 行われ表示するとa_sizeを超える要素の表示の時は参照先の変数に最後に代入された値を表示した
 */
