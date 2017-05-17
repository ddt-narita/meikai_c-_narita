/* 演習08-14
 * 文字列sの文字の並びを反転させる関数の作成
 * 作成日：5月17日
 * 作成者：成田修之
 */

#include<cstring>
#include<iostream>
using namespace std;

/* 関数str_rvs
 * 文字列sの文字の並びを反転させる関数
 * 引数はchar型へのポインタ
 * 返却値はchar型へのポインタ
 * 作成日：5月17日
 * 作成者；成田修之
 */

char* str_rvs(char* s);


int main()
{
	//文字列を入力するための配列
	char chrStr[100] = {0};
	//入力を促す
	cout << "文字列を入力してください：";
	//キーボードから入力
	cin  >> chrStr;
	//関数str_rvsを呼び出して文字列を逆順にする
	str_rvs(chrStr);
	//逆順になった文字列を表示
	cout << "入力された文字列を逆順に表示します：" << chrStr;

	//main関数の返却値
	return 0;
}

char* str_rvs(char* s)
{
	//文字列の長さを求める
	int length = strlen(s);
	//逆順にするだけなので繰り返すのは長さの半分
	for(int i =0;i < length / 2; i++) {
		//避難させるための変数
		char chrTrade = s[i];
		//交換先の値を代入
		s[i] = s[length - i -1];
		//避難させてあった値を代入して交換
		s[length - i - 1] = chrTrade;
	}
	//受け取ったそのままのsを返す
	return s;
}
