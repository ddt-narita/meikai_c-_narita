/* 演習08-16
 * 文字列s内の数字文字をすべて削除する関数の作成
 * 作成日：5月17日
 * 作成者：成田修之
 */
#include<cctype>
#include<iostream>
using namespace std;

/* 関数strrmv_digits
 * 文字列s内の数字文字すべてを削除する
 * 引数はchar型へのポインタ
 * 返却値は受け取ったポインタそのまま
 * 作成日：5月17日
 * 作成者：成田修之
 */

char* strrmv_digits(char* s)
{
	//ナル文字まで続ける
	for(int i = 0; s[i]; i++) {
		//その文字が数字文字の時
		if(isdigit(s[i]) == 1) {
			//数字の時から増やしてナル文字まで繰り返す
			for(int j = 0; s[i + j]; j++) {
				//一つずつずらす
				s[i + j] = s[i + j + 1];
			}
			//もう一度そこから始めるのでiを1減らす
			i--;
		}
	}
	return s;
}

int main()
{
	//文字列を入力するための配列
	char chrStr[100] ;

	//入力を促す表示
	cout << "文字列を入力してください";
	//キーボードから入力
	cin  >> chrStr;
	//数字文字を削除することを明示
	cout << "入力された文字列から数字文字を削除して表示します：";

	//関数strrmv_digitsを呼び出して数字を削除
	strrmv_digits(chrStr);

	//削除後の文字列を表示
	cout << chrStr;

	//main関数の返却値
	return 0;
}
