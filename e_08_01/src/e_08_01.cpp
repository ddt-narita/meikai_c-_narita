/* 演習08－01
 * list8-4の配列の宣言を書き換え
 * 作成日：5月16日
 * 作成者：成田修之
 * 更新日：5月22日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	//要素数不明のchar型の配列を"ABC\0DEF"で初期化
	char s[] = "ABC\0DEF";
	//文字列を表示
	cout << "配列sに文字列\"" << s << "\"が格納されています\n";

	//main関数の返却値
	return 0;
}

/* char型配列の文字列の途中にナル文字が挟まるとそこまでの文字しか表示されなかった。
 * 文字列として認識されるのは先頭からナル文字までだということがわかる
 * 今回表示された文字列としてはABCのみで後半のDEFに関してはABCとは
 * 別の文字列として認識されているのではないかと考えることが出来る
 */
