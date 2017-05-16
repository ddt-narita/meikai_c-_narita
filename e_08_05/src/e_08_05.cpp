/* 演習08-05
 * 文字列sの全文字を最後から順に一行に1文字ずつ表示する関数の作成
 * 作成日：5月16日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数putv
 * 文字列sの全文字を先頭から順に一行に一文字ずつ表示する関数
 * 引数はcharのポイント型
 * 返却値は無し
 * 作成日：5月16日
 * 作成者：成田修之
 */

void putv (const char* s);


int main()
{
	//文字列の配列
	char strInput[35];

	//入力を促す表示
	cout << "文字列を入力してください。";
	//キーボードから入力
	cin  >> strInput;


	cout << "一文字一行で表示します。\n";
	//関数を呼び出し一行一文字で表示する
	putv(strInput);

	//main関数の返却値
	return 0;
}


void putv (const char* s)
{
	//ナル文字まで繰り返す
	for(int i = 0; s[i]; i++) {
		//各要素を表示
		cout << s[i] << "\n";
	}
}
