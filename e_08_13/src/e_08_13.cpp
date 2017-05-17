/* 演習08-13
 * 文字列sに含まれる最も先頭に位置する文字cへのポインタを返す関数
 * 作成日：5月17日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数strchr_ptr
 * 文字列sに含まれる最も先頭に位置する文字cへのポインタを返す
 * 引数はcharへのポインタ型、char型
 * 返却値は先頭のcへのポインタ
 * 作成日：5月17日
 * 作成者：成田修之
 */
const char* strchr_ptr(const char* s,char c);


int main()
{
	char chrStr[35];	//文字列を入力するための配列
	char chrChange;		//変更したい文字を入力するため

	//文字列の入力を促す
	cout << "文字列を入力してください：";
	//キーボードから入力
	cin  >> chrStr;

	//探したい文字の入力を促す表示
	cout << "文字列中の表示したい文字を入力してください：";
	//キーボードから入力
	cin  >> chrChange;

	//返却されたポインタがNULLではない時
	if(strchr_ptr(chrStr,chrChange) != 0) {
		//帰ってきたポイントの要素を表示
		cout << *strchr_ptr(chrStr,chrChange);
	//返却されたポインタがNULLの時
	} else {
		//その文字がなかったことを表示
		cout << "その文字は文字列中には含まれていません";
	}

	//main関数の返却値
	return 0;
}


const char* strchr_ptr(const char* s,char c)
{
	const char* ptr = s;
	ptr = 0;
	//ナル文字まで続ける
	for(int i= 0; s[i]; i++) {
		//探したい文字と出会ったとき
		if(s[i] == c) {
			//返却するポインタにその時の文字のアドレスを代入
			ptr = &s[i];
			//先頭が知りたいだけなので繰り返しを抜ける
			break;
		}
	}
	return ptr;

}
