/* 演習 03-22
 * n段の下向き数字ピラミッドの表示
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	int nPiramidFloar; //入力された段のピラミッドの段数

	//段数の入力を促す表示
	cout	<< "n段の下向きの数字ピラミッドを表示します。\n何段ですか：";
	//キーボードから入力
	cin		>> nPiramidFloar;

	/*カウントに使うi行目
	 一文字表示に関しては追加可能なようにダブルコーテーション*/
	for(int i = 1 ; i <= nPiramidFloar; i++) {

		//空白文字をカウントするのに使うj_1列目
		//i行目ではi-1個表示する
		for(int j_1 = 1; j_1 <= ( i - 1 ); j_1++ ) {
			//空白文字を表示
			cout << " ";
		}

		//i%10を表示する数をカウントするj_2列目
		//i行目では(n-i)*2;1個表示する
		for(int j_2 = 1 ; j_2 <= ((nPiramidFloar-i) * 2 + 1); j_2++) {
			//10で割った剰余を表示
			cout << i%10;
		}

		//列が変わる前に改行する
		cout << '\n';
	}
	//main関数の返却値0
	return 0;
}
