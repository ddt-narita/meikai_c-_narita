/* 演習08-10
 * strcat関数とstrncat関数と同等の関数を作成
 * 作成日：5月17日
 * 作成者：成田修之
 */

#include<cstring>
#include<iostream>
using namespace std;

/* 関数strcat2
 * strcat関数と同等な関数
 * 引数は2つのchar型へのポインタ
 * 返却値は無し
 * 作成日：5月17日
 * 作成者：成田修之
 */

void strcat2(char* c, const char* s);


/* 関数strncat2
 * strncat関数と同等の関数
 * 引数は2つのchar型へのポインタ、int型
 * 返却値は無し
 * 作成日：5月17日
 * 作成者：成田修之
 */

void strncat2(char* c,const char*s,int n);


int main()
{

	char chrStrA[35] = {0};	//文字列の入力に使う
	char chrStrB[35] = {0};	//文字列Aに連結する文字列B
	int nInput = 0;			//どこまで連結するか入力するため変数

	//文字列Aに入力を促す
	cout << "文字列Aに文字列を入力してください：";
	//キーボードから入力
	cin  >> chrStrA;
	//文字列Bに入力を促す
	cout << "文字列Bに文字列を入力してください：";
	//キーボードから入力
	cin  >> chrStrB;

	//関数strcat2を呼び出して文字列Aに文字列Bを連結
	strcat2(chrStrA,chrStrB);
	//連結した文字列Aを表示
	cout << "文字列Aに文字列Bを連結して表示します。：" << chrStrA << "\n";
	//文字列Bに文字列Aをいくつ連結するか入力を促す
	cout << "文字列Bに文字列Aを連結します。いくつ連結しますか：";
	//キーボードから入力
	cin  >> nInput;
	//関数strncat2を呼び出してn個連結させる
	strncat2(chrStrB,chrStrA,nInput);
	//連結した文字列を表示
	cout << "連結した文字列を表示します。：" << chrStrB;

	//main関数の返却値
	return 0;
}


void strcat2(char* c, const char* s)
{
	//連結されるほうの配列の長さを代入
	int length = strlen(c);
	//ナル文字まで繰り返す
	for(int i = 0; s[i]; i++) {
		//配列ｃの終端から代入していく
		c[i+length] = s[i];
	}
}


void strncat2(char* c,const char*s,int n)
{
	//連結されるほうの文字列の長さを代入
	int length = strlen(c);
	//入力されたnの値まで繰り返す
	for(int i = 0; i < n; i++) {
		//終端から順に代入していく
		c[i+length] = s[i];
	}
}

