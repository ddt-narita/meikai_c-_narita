/* 演習08-11
 * strcmp関数,strncmp関数と同等の関数の作成
 * 作成日：5月17日
 * 作成者：成田修之
 */
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;

/* 関数strcmp2
 * strcmp関数と同等の関数
 * 引数は2つのchar型へのポインタ
 * 返却値は文字列Aのほうが大きければ正の整数値、文字列Bのほうが大きければ
 * 負の整数値、等しければ0を返す
 * 作成日：5月17日
 * 作成者：成田修之
 */

int strcmp2(char* c,const char* s)
{
	//文字列cの長さを代入
	int length = strlen(c);
	//返却するのに使う
	int nReturn = 0;

	//どちらかの文字列の終端の次の文字まで繰り返す
	for(int i = 0; i <= length; i++) {
		//文字の比較をして文字列Aの文字のほうが大きいとき
		if(c[i] > s[i]) {
			//正の整数値を返却する変数に代入
			nReturn = rand() 	% 100 + 1;	break;
		//文字の比較をして文字列Aの文字のほうが小さいとき
		} else if(c[i] < s[i]){
			//負の整数値を返却する変数に代入
			nReturn = -rand() 	% 100 - 1;	break;
		}
	}
	//条件にそって返却する
	return nReturn;
}

/* 関数strncmp2
 * strncmpと同等な関数
 * 引数は2つのchar型へのポインタとint型変数
 * 返却値は無し
 * 作成日：5月17日
 */

int strncmp2(char* c,const char* s, int n)
{
		//返却するのに使う
		int nReturn = 0;

		//どちらかの文字列の終端の次の文字まで繰り返す
		for(int i = 0; i < n && c[i] != 0 && s[i] != 0; i++) {
			//文字の比較をして文字列Aの文字のほうが大きいとき
			if(c[i] > s[i]) {
				//正の整数値を返却する変数に代入
				nReturn = rand() 	% 100 + 1;	break;
			//文字の比較をして文字列Aの文字のほうが小さいとき
			} else if(c[i] < s[i]){
				//負の整数値を返却する変数に代入
				nReturn = -rand() 	% 100 - 1;	break;
			}
		}
		//条件にそって返却する
		return nReturn;
}

int main()
{
	//ランダムな値を生成する種を設定
	srand(time(NULL));
	//文字列
	char chrStr[100];
	//比較を行うことを明示
	cout << "\"ABCDE\"との比較を行います。\n";
	//終了条件の提示
	cout << "\"XXXXX\"で終了します。";
	//終了条件を満たすまで繰り返す
	while(1) {
		//入力を促す表示
		cout << "\n文字列chrStr：";
		//キーボードから入力
		cin  >>chrStr;

		//終了条件を満たしたとき繰り返しをやめる
		if(strcmp2(chrStr,"XXXXX") == 0) {
			break;
		}
		//
		cout << "strcmp(\"ABCDE\",st) =" 	<< strcmp2("ABCDE",chrStr)	 	<< "\n";
		//
		cout << "strncmp(\"ABCDE\",st) =" 	<< strncmp2("ABCDE",chrStr,3)	<< "\n";
	}

	//main関数の返却値
	return 0;
}

