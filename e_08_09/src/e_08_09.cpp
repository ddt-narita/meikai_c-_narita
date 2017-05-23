/* 演習08-09
 * p.308で学習したstrcpy及びstrncpyと同等な関数の作成
 * 作成日：5月16日
 * 作成者：成田修之
 * 更新日：5月22日
 * 更新者：成田修之
 */

#include<cstring>
#include<iostream>
using namespace std;

/* 関数atrcpy2
 * strcpyと同等な関数
 * 引数は2つのchar型へのポインタ
 * 返却値は無し
 * 作成日：5月16日
 * 作成者：成田修之
 */

void strcpy2(char* s, const char* c);

/* 演習08-09
 * strncpyと等しい関数
 * 引数は2つのchar型へのポインタ,int型変数
 * 返却値は無し
 * 作成日：5月16日
 * 作成者：成田修之
 */
void strncpy2(char* s, const char* c, int n);


int main()
{
	char chrStrA[35];				//オリジナル側の文字列
	char chrStrB[35];				//コピーされる側の文字列
	char x[43] ="XXXXXXXXXX";		//リセットするための文字列
	int nInput;			//いくつ追加するか入力に使う

	//入力を促す
	cout << "文字列を入力してください：";
	//キーボードから入力
	cin  >> chrStrA;

	//コピーすることを明示
	cout << "文字列をコピーして表示します：";

	//関数strcpy2を呼び出してコピー
	strcpy2(chrStrB,chrStrA);

	//コピーした文字列を表示
	cout << chrStrB << "\n";

	//文字列xでリセット
	cout << "全要素をXで埋めました\n";
	//関数strcpy2を呼び出してXで埋める
	strcpy2(chrStrB,x);

	//コピーする範囲を決める
	cout<<"もう一度コピーします。どこまでコピーしますか：";
	//キーボードから入力
	cin >> nInput;

	//関数strncpy2を呼び出して文字列bに文字列Aをｎ個コピーする
	strncpy2(chrStrB,chrStrA,nInput);

	//コピーした文字列を表示する
	cout<< "表示します：";
	cout << chrStrB;

	//main関数の返却値
	return 0;
}


void strcpy2(char* s, const char* c)
{
	//ナル文字になるまで繰り返す
	for(int i = 0; c[i]; i++) {
		//コピーする
		s[i] = c[i];
	}
}


void strncpy2(char* s, const char* c, int n)
{
	//長さはunsighed型なのでキャストしておく
	int length = strlen(c);
	//コピーしたいものが入力された値より小さいとき
	if(length < n){
		//その長さ分だけコピー
		for(int i = 0; i < length; i++) {
			//コピーする
			s[i]=c[i];
		}
		//残りをナル文字で埋める
		for(int i = strlen(c); s[i]; i++) {
			s[i] = 0;
		}
	//それ以外の時
	}else{
		//入力されたところまでコピーする
		for(int i = 0; i < n; i++) {
			s[i]=c[i];
		}
	}

}
