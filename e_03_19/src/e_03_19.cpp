/* 演習03-19
 * n段の正方形を作る
 * 作成日：5月3日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{

	int nSquare;	//何段の正方形を作るか入力するのに使う変数

	//入力された値が1より低い値の限り繰り返す
	for( ; nSquare < 1; ) {
		//正方形を表示することを明示
		cout 	<< "n段の正方形を表示します\n";
		//何段にするか入力を促す表示
		cout 	<< "nの値：";
		//キーボードから入力
		cin 	>> nSquare;
	}


	//iが1～nまでの間以下を繰り返す
	for(int i = 1; i <= nSquare; i++ ){
		//jが1～nの間＊を表示を繰り返す
		for(int j = 1; j <= nSquare; j++){
			//アスタリスクの表示を繰り返す
			cout << "*";
		}
		//jが表示を繰り返し終わりjが一つ増える直前に改行文字を出力する
		cout<<"\n";
	}

	//main関数の返却値0
	return 0;
}
