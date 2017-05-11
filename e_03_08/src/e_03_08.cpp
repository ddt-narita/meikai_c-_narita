/* 演習 03-08
 * list03-10を読み込んだ値が1未満の時改行文字を出漁しないように変更
 * 作成日：5月2日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */


#include<iostream>
using namespace std;

int main()
{
	//個数の入力に使う変数
	int nNumber;

	//表示する個数の入力を促す表示
	cout 	<< "何個*を表示しますか：";
	//個数をキーボードから入力
	cin		>> nNumber;

	//一文字表示に関しては追加可能なようにダブルコーテーション

	//iが0からnNumberまで増えていく毎に*(nNumber個)を表示
	for(int i = 0; i < nNumber; i++) {
		//アスタリスクを表示
		cout << "*";
	}

	//nが1以上の時のみ改行文字を出力するようにする
	if(nNumber >= 1) {
		cout << "\n";
	}

	//main関数の返却値0
	return 0;
}
