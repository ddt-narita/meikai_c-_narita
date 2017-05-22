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

int strcmp2(char* c,const char* s);


/* 関数strncmp2
 * strncmpと同等な関数
 * 引数は2つのchar型へのポインタとint型変数
 * 返却値は無し
 * 作成日：5月17日
 */

int strncmp2(char* c,const char* s, int n);


int main()
{
	//動的に生成する文字配列の要素数
	const int Deta = 4;
	//ランダムな値を生成する種を設定
	srand(time(NULL));
	//動的オブジェクトで作った可変な文字列を指すポインタを宣言
	char* chrStr1 = new char[Deta];
	char* chrStr2 = new char[Deta];

	//比較を行うことを明示
	cout << "strStr1とstrStr2の比較を行います。\n";
	//終了条件の提示
	cout << "\"XXXXX\"で終了します。\n";
	//終了条件を満たすまで繰り返す
	while(1) {

		//入力を促す表示
		cout << "文字列chrStr1：";
		//キーボードから入力
		cin  >>chrStr1;
		//終了条件を満たしたとき繰り返しをやめる
		if(strcmp2(chrStr1,"XXXXX") == 0) {
			break;
		}

		//入力を促す表示
		cout << "文字列chrStr2：";
		//キーボードから入力
		cin  >>chrStr2;
		//終了条件を満たしたとき繰り返しをやめる
		if(strcmp2(chrStr2,"XXXXX") == 0) {
			break;
		}

		//ABCDEと入力された文字列すべてを比べた時の大小関係を表示
		cout << "strcmp(chrStr1,chrStr2) =" 	<< strcmp2(chrStr1, chrStr2)	 	<< "\n";
		//ABCDEと入力された文字列の3つ目までを比べた時の大小関係を表示
		cout << "strncmp(chrStr1,chrStr2,3) =" 	<< strncmp2(chrStr1, chrStr2,3)	<< "\n";
	}
	delete [] chrStr1;		//chrStr1に確保してたメモリの解放
	delete [] chrStr2;		//chrStr2に確保してたメモリの解放

	//main関数の返却値
	return 0;
}


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
