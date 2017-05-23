/* 演習08-08
 * 文字列s内の文字を後ろから逆順に表示する関数の作成put_rev
 * 作成日：5月16日
 * 作成者：成田修之
 */
#include<cstring>
#include<iostream>
using namespace std;

/* 関数put_rev
 * 文字列s内の文字を逆順に表示する関数
 * 引数はchar型へのポインタ
 * 返却値は無し
 * 作成日：5月16日
 * 作成者；成田修之
 */

void put_rev(const char* s);


int main()
{
	//文字列を入力するための配列
	char chrStr[35];

	//入力を促す表示
	cout << "文字列を入力してください";
	//キーボードから入力
	cin  >> chrStr;

	//逆順に表示することを明示
	cout << "入力した文字列を逆順に表示します";
	//関数を呼び出して入力された文字列を逆順に表示
	put_rev(chrStr);

	//main関数の返却値
	return 0;
}


void put_rev(const char* s)
{
	//ナル文字を含めない文字の数を求めてその番号から降りていくように表示
	for(int i =strlen(s); i >= 0; i--) {
		//逆順に表示
		cout << s[i];
	}
}
