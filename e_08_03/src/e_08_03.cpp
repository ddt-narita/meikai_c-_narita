/* 演習08-03
 * 文字列中の大文字を小文字に変換したうえで表示する関数の作成
 * 作成日：5月16日
 * 作成者：成田修之
 */
#include<cctype>
#include<iostream>
using namespace std;

/* 関数put_lower
 * 文字列流の大文字を文字に変換したうえで表示する関数の作成
 * 引数はchar型の配列
 * 返却値は無し
 * 作成日：5月16日
 * 作成者：成田修之
 */

void put_lower(const char s[]);


int main()
{
	//char型の文字列配列
	char charStr[36];

	//文字列の入力を促す
	cout << "文字列：";
	//キーボードから入力
	cin  >> charStr;

	//関数put_lowerを呼び出して表示
	put_lower(charStr);
	//改行して終了
	cout << "\n";

	//main関数の返却値
	return 0;
}

void put_lower(const char s[])
{
	//ナル文字到達するまで繰り返す
	for(int i = 0; s[i]; i++) {
		//大文字は小文字に変換して表示
		cout <<static_cast<char>(tolower(s[i]));
	}

}
