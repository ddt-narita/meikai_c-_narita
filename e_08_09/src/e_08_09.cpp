/* 演習08-09
 * p.308で学習したstrcpy及びstrncpyと同等な関数の作成
 * 作成日：5月16日
 * 作成者：成田修之
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

void strcpy2(char* s, const char* c)
{
	//ナル文字になるまで繰り返す
	for(int i = 0; c[i]; i++) {
		//コピーする
		s[i] = c[i];
	}
}

/* 演習08-09
 * strncpyと等しい関数
 * 引数は2つのchar型へのポインタ,int型変数
 * 返却値は無し
 * 作成日：5月16日
 * 作成者：成田修之
 */
void strncpy2(char* s, const char* c,unsigned int n)
{
	//長さはunsighed型なのでキャストしておく
	int lenghs = static_cast<int>(strlen(c));
	//コピーしたいものが入力された値より小さいとき
	if(lenghs < n){
		//その長さ分だけコピー
		for(unsigned int i = 0; i < lenghs; i++) {
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

int main()
{
	char chrStrA[35];				//オリジナル側の文字列
	char chrStrB[35];				//コピーされる側の文字列
	char x[43] ="XXXXXXXXXX";		//
	unsigned int nInput;			//

	cout << "文字列を入力してください：";
	cin  >> chrStrA;

	cout << "文字列をコピーして表示します：";

	strcpy2(chrStrB,chrStrA);

	cout << chrStrB << "\n";

	cout << "全要素をXで埋めました\n";
	strcpy2(chrStrB,x);

	cout<<"もう一度コピーします。どこまでコピーしますか：";
	cin >> nInput;

	strncpy2(chrStrB,chrStrA,nInput);

	cout<< "表示します：";
	cout << chrStrB;
}
