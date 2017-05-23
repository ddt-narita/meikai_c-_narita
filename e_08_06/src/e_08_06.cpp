/* 演習08-06
 * 文字列sに含まれる文字cの個数を返す関数の作成
 * 作成日：5月16日
 * 作成者：成田修之
 * 更新日：5月22日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数strch_cnt
 * 文字列sに含まれる文字cの個数を返す関数
 * 引数はchar型へのポインタ、char型
 * 返却値は文字cの個数
 * 作成日：5月16日
 * 作成者：成田修之
 */

int strch_cnt(const char* s, char c);


int main()
{
	//配列の文字列
	char charStr[34];
	//探したい文字
	char charSearch;

	//入力を促す表示
	cout << "文字列を入力してください：";
	//キーボードから入力
	cin  >> charStr;

	//入力を促す表示
	cout << "文字列に含まれる任意の文字を探します。何を探しますか？：";
	//キーボードから入力
	cin  >> charSearch;

	//関数strch_cntを呼び出し探したい文字の個数を表示
	cout << "文字" << charSearch << "は" << strch_cnt(charStr,charSearch) << "個です。";
}


int strch_cnt(const char* s, char c)
{
	//探す文字の数をカウントし返却する変数
	int nCountC = 0;
	//ナル文字まで繰り返す
	for(int i = 0; s[i]; i++) {
		//探している文字と同じとき
		if(s[i] == c) {
			//カウントする
			nCountC++;
		}
	}

	//カウントしたものを返却
	return nCountC;
}
