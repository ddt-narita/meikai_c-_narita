//演習０４－１２
//トランプの記号の4つの列挙子をを持つ列挙帯を定義して入力した値を読み込んで対応した記号を表示
//
//5月5日
//成田修之
#include <iostream>
using namespace std;
int main()
{
	//列挙帯名 trumpで列挙子Dia Heart Club Spade Invalidを宣言
	enum trump {Dia, Heart, Club, Spade,Invalid};

	//入力に使う変数　for文を最初に入っていくために0～4以外の数で初期化
	int nInputTrump = -1;

	for( ; nInputTrump < Dia || nInputTrump > Invalid; ) {
		cout << "トランプの記号を表示します。0…ダイア、1…ハート、2…クラブ、"
				"3…スペード、4…終了：";
		cin >> nInputTrump;
	}

	//Invalidは終了。他はその記号を表示
	if(nInputTrump != Invalid) {
		trump selected =static_cast<trump>(nInputTrump); //int型で入れた0～4の値をtrump型の割り振られたものに変更
		switch(selected) {
		case Dia: cout << "♦ダイヤ\n";		break;
		case Heart: cout << "💛ハート\n";		break;
		case Club: cout << "♣クラブ\n";		break;
		case Spade: cout << "♠スペード\n";	break;
		}
	}
}
