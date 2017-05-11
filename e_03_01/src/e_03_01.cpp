/* 演習 03-01
 * 入力した値の正負判断を好きなだけ繰り返す
 * 作成日：5月2日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */

//文字列を扱うstring型を含むヘッダ
#include<string>
#include<iostream>
using namespace std;

int main ()
{

	//繰り返しを行うかの判定に使う文字string型の変数を宣言
	string strRetry;
	//判定を行う整数を入力する変数
	int nInput;

	//入力した整数の正負の判定をYかｙが入力され続ける限り繰り返す
	do {
		//繰り返した時前の値が残っているので0でリセット
		nInput = 0;
		//整数値の入力を促す表示
		cout 	<< "整数値：";
		//キーボードから入力
		cin 	>> nInput;

		//入力された値が正の時
		if(nInput > 0) {
			//正であることを表示
			cout << "その値は正です\n";

		//入力された値が負の時
		} else if(nInput < 0) {
			//負であることを表示
			cout << "その値は負です\n";

		//それ以外の場合（0であるとき）
		} else {
			//0であることを表示
			cout <<"その値は0です\n";
		}

		//繰り返す条件を表示。Yを入力で繰り返し。Nなら終了
		cout	<< "もう一度？　Y…Yes / N…No：";
		//キーボードから入力
		cin 	>> strRetry;

	//一文字表示に関しては追加可能なようにダブルコーテーション

	//retryに入力されたのがYかyの限り繰り返す
	}while(strRetry == "Y" || strRetry == "y");

	//main関数の返却値0
	return 0;
}
