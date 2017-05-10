/* 演習 02-02
 * list02-05のelseをelse ifにしたらどうなるか検討
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新日：成田修之 */
#include<iostream>
using namespace std;

int main()
{
	//キーボードから読み込むための変数を宣言
	int nInteger;
	//入力を促す表示
	cout	<< "整数値：";
	//キーボードから入力する
	cin 	>> nInteger;

	//読み込んだ値が正の時
	if(nInteger > 0) {

		//正であることを表示
		cout << "その値は正です。\n";

	//読み込んだ値が負の時
	} else if(nInteger < 0) {

		//負であることを表示
		cout << "その値は負です。\n";

	//list2-5ではelseのみで文へ、ここではif(nInteger==0)に書き換える
	} else if(nInteger == 0) {

		//0であることを表示
		cout << "その値は0です。\n";
	}

	//main関数の返却値0
	return 0;
}
//結果：else をelse ifにしても条件が適当であれば結果は変わらない
