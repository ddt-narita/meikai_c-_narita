/* 演習08-17
 * 2つの文字列s1とs2の内容を入れ替える関数の作成
 * 作成日：5月17日
 * 作成者：成田修之
 */

#include<cstring>
#include<iostream>
using namespace std;

/* 関数swap_string
 * 2つの文字列の内容をそっくり入れ替える関数
 * 引数は２つのchar型へのポインタ
 * 返却値は無し
 * 作成日：5月17日
 * 作成者：成田修之
 */

void swap_string(char* s1,char*s2)
{
	//避難先の配列
	char chrTrade[100] = {0};

	//文字列Aを作った避難先にコピー
	strcpy(chrTrade,s1);
	//文字列Aに文字列Bをコピー
	strcpy(s1,s2);
	//文字列Bに避難してあった文字列Aをコピーする
	strcpy(s2,chrTrade);
}

int main()
{
	char chrStrA[100];		//文字列Aを入力するための配列
	char chrStrB[100];		//文字列Bを入力するための配列

	//文字列Aに入力を促す
	cout << "文字列Aを入力してください：";
	//キーボードから入力
	cin  >> chrStrA;
	//文字列Bに入力を促す
	cout << "文字列Bを入力してください：";
	//キーボードから入力
	cin  >> chrStrB;
	//入れ替えることを明示
	cout << "入力された二つの文字列を入れ替えます。\n";

	//関数swap_stringを呼び出して2つの文字列を入れ替える
	swap_string(chrStrA,chrStrB);

	//文字列Aを表示
	cout << "文字列A：" << chrStrA << "\n";
	//文字列Bを表示
	cout << "文字列B：" << chrStrB << "\n";


}
