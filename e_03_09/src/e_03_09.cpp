/* 演習 03-09
 * list03-04をfor文で書き換える
 * 作成日：5月2日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	//キーボードからの入力に使う変数
	int nInput;

	//カウントダウンすることを明示
	cout << "カウントダウンします。\n";

	//本文を一度実行し条件に当てはまればもう一度繰り返す
	do{
		//整数値の入力を促す表示
		cout	<< "正の整数値：";
		//キーボードから入力
		cin		>> nInput;

	//入力された値がせいでないとき繰り返す
	} while(nInput <= 0);

	//nInputの値が0より低くなるまで繰り返す
	for( ; nInput >= 0; nInput--) {
		//入力されたnInputの値を表示する　一文字表示に関しては追加可能なようにダブルコーテーション
		cout << nInput << "\n";
	}

	//main関数の返却値0
	return 0;
}
