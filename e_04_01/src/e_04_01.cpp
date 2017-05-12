/* 演習 04-01
 * すべての文字について文字種がわかる一覧を表示する
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

//判定を行うための関数を含むヘッダ
#include<cctype>
//型の最小値最大値を含んだヘッダ
#include<climits>
#include<iostream>

using namespace std;

int main()
{
	cout << "文字の種類一覧表";

	//char型の変数iを1から増やす間繰り返す
	for(char i = 0; i != CHAR_MAX ;i++ ) {

		/*charが以下の時はそれを表示する
		  一文字の表示は追加があるときのためにダブルコーテーションで行う*/
		switch(i) {
		case '\a'	: cout << "\\a"; break;
		case '\b' 	: cout << "\\b"; break;
		case '\t' 	: cout << "\\t"; break;
		case '\n' 	: cout << "\\n"; break;
		case '\v' 	: cout << "\\v"; break;
		case '\f' 	: cout << "\\f"; break;
		case '\r' 	: cout << "\\r"; break;
		//上以外で表示のある文字はそれを、表示するものがなければ空白を出力する
		default  	: cout <<' '<< (isprint(i) ? i : ' ');
		}

		//char型の変数iがある数のとき表示される文字について種類を判定する
		//数字かどうかの判定が真の時
		if(isdigit(i)) {
			//数字であることを表示
			cout << " 数字";
		}
		//大文字かどうかの判定が真の時
		if(isupper(i)) {
			//大文字であることを表示
			cout << " 大文字";
		}
		//小文字かどうかの判定が真の時
		if(islower(i)) {
			//小文字であることを表示
			cout << " 小文字";
		}
		//記号文字かどうかの判定が真の時
		if(ispunct(i)) {
			//記号文字であることを表示
			cout << " 記号文字";
		}
		//空白文字かどうかの判定が真の時
		if(isspace(i)) {
			//空白文字であることを表示
			cout << " 空白文字";
		}
		//各文字を表示するごとに改行
		cout << "\n";
	}
	//main関数の返却値
	return 0;

}
//カナ文字については何故表示されないのかわからなかった
//char型の限界かと思われる？

