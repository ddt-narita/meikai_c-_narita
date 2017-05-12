/* 演習０４－１２
 * トランプの記号の4つの列挙子をを持つ列挙帯を定義して入力した値を読み込んで対応した記号を表示
 * 作成日：5月5日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 * */
#include <iostream>
using namespace std;
int main()
{
	//列挙帯名 trumpで列挙子Dia Heart Club Spade Invalidを宣言
	enum trump {Dia, Heart, Club, Spade,Invalid};

	//入力に使う変数　for文を最初に入っていくために0～4以外の数で初期化
	int nInputTrump = -1;

	//0から4の値以外が入力される限り繰り返す
	for( ; nInputTrump < Dia || nInputTrump > Invalid; ) {
		//入力を促す表示
		cout << "トランプの記号を表示します。0…ダイア、1…ハート、2…クラブ、"
				"3…スペード、4…終了：";
		//キーボードから入力
		cin >> nInputTrump;
	}

	//Invalidは終了。他はその記号を表示
	if(nInputTrump != Invalid) {
		trump selected =static_cast<trump>(nInputTrump); //int型で入れた0～4の値をtrump型の割り振られたものに変更
		//入力された値によって分岐
		switch(selected) {
		//0（ダイア）の時
		case Dia: cout << "♦ダイヤ\n";		break;
		//1（ハートの時）
		case Heart: cout << "💛ハート\n";		break;
		//2（クラブの時）
		case Club: cout << "♣クラブ\n";		break;
		//3（スペードの時）
		case Spade: cout << "♠スペード\n";	break;
		}
	}
	//main関数の返却値0
	return 0;
}
/*for文の条件でnInputTrump<0||nInputTrump>4でも実行できることが確認できた
またselectedを宣言せずswitch文の条件部をnInputTrumpに変えても作動した
列挙帯を使うことでどんなことが便利になるのかがわからなかった。*/
