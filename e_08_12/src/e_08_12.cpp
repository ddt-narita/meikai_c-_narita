/* 演習08-12
 * 文字列sに含まれる最も先頭に位置する文字cの添字を返す関数の作成
 * 作成日：5月17日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数strchr_idx
 * 文字列sに含まれる最も先頭に位置する文字cの添字を返す関数
 * 引数はchar型へのポインタとchar型
 * 返却値は最も先頭の文字cの添字
 * 作成日：5月17日
 * 作成者：成田修之
 */

int strchr_idx(const char* c,char s);


int main()
{
	char chrStr[35];	//文字列を入力するための配列
	char chrSearch;		//探したい文字を入力するため

	//文字列の入力を促す
	cout << "文字列を入力してください：";
	//キーボードから入力
	cin  >> chrStr;

	//探したい文字の入力を促す表示
	cout << "入力された文字列から文字を探します。探したい文字を入力してください。：";
	//キーボードから入力
	cin  >> chrSearch;

	//返却された値が-1でない時は先頭がどこか表示
	if(strchr_idx(chrStr,chrSearch) != -1) {
		//関数strchr_idxを呼び出して探したい文字の先頭を探す
		cout << "その文字の一番先頭は" << strchr_idx(chrStr,chrSearch) << "番目です。";
	//返却された値が-1の時
	} else {
		//文字列中に存在しないことを表示
		cout << "その文字は入力された文字列には含まれていません";
	}


	//main関数の返却値
	return 0;
}


int strchr_idx(const char* s,char c)
{
	//返却に使う変数、一緒のものがなかった時そのまま返すため-1で初期化
	int nSub = -1;
	//ナル文字まで続ける
	for(int i= 0; s[i]; i++) {
		//探したい文字と出会ったとき
		if(s[i] == c) {
			//返却する変数に代入
			nSub = i+1;
			//先頭が知りたいだけなので繰り返しを抜ける
			break;
		}
	}
	//-1か先頭の添字を返却する
	return nSub;
}
