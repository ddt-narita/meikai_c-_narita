/* 演習 03-21
 * n段のピラミッドを作成
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之*/

#include<iostream>
using namespace std;

int main()
{
	int nPiramidFloar;		//入力される段数に使う
	//段数の入力を促す表示
	cout << "n段のピラミッドを表示します\n何段ですか：";
	//キーボードから入力
	cin >> nPiramidFloar;


	/*i=1からｎ行目まで以下を繰り返す
	 一文字表示に関しては追加可能なようにダブルコーテーション*/
	for(int i = 1; i <= nPiramidFloar; i++) {

		//i行目では先にnからiを引いた値分繰り返す
		for(int j = 1; j <= (nPiramidFloar - i); j++) {
			//空白文字を出力する
			cout << " ";
		}

		//設問の通りi行目に(i-1)*2+1回繰り返す
		for(int j = 1; j <= (i - 1 ) * 2 + 1; j++) {
			//アスタリスクを表示
			cout << "*";
		}

		//列が変わる前に改行文字を出力
		cout << "\n";
	}

	//main関数の返却値
	return 0;

}
