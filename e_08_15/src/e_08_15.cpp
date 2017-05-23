/* 演習08-15
 * 文字列s1中に含まれる最も先頭に位置する文字列s2の先頭文字へのポインタを返す関数の作成
 * 作成日：5月17日
 * 作成者：成田修之
 */
#include<cstring>
#include<iostream>
using namespace std;

/* 関数str_match
 * 文字列s1中に含まれる最も先頭に位置する文字列s2の先頭文字へのポインタを返す関数
 * 引数は2つのchar型へのポインタ
 * 返却値は文字列s1中に含まれる最も先頭に位置する文字列s2の先頭文字へのポインタ
 * 作成日：5月17日
 * 作成者；成田修之
 */

const char*str_match(char* s1,char* s2);


int main ()
{
	char chrStrA[100];		//文字列を入力するための配列
	char chrStrB[100];		//文字列Aから探す文字列を探すための配列

	//文字列Aに入力を促す表示
	cout << "文字列Aに入力してください。：";
	//キーボードから入力
	cin  >> chrStrA;

	//文字列Bに入力を促す
	cout << "文字列A中の文字列Bを探します。探したい文字列Bを入力してください：";
	//キーボードから入力
	cin  >> chrStrB;

	//何をするかを表示
	cout << "文字列Bが含まれているところから先の文字列Aを表示します";
	//関数str_matchを呼び出して帰ってきたポインタから先の文字列を表示
	cout << str_match(chrStrA,chrStrB);

	//main関数の返却値
	return 0;
}


const char*str_match(char* s1,char* s2)
{
	//文字列Bの長さを代入
	int length = strlen(s2);
	//返却するポインタをナルで初期化
	char* ptr = 0;
	//文字列Aがナル文字になるまで繰り返す
	for(int i =0; s1[i]; i++){
		//文字列Aについて1つずらしながらstrncmp関数を使って文字列Bと比べて同値の時
		if(strncmp(&s1[i],s2,length) == 0) {
			//返却するポインタにその時の先頭のポインタを代入
			ptr = &s1[i];
		}
	}
	//返却する
	return ptr;
}
