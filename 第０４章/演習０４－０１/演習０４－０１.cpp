#include<cctype>
#include<climits>
#include<iostream>

using namespace std;

int main()
{
	cout << "文字の種類一覧表";

	//char型の変数iを1から増やす間繰り返す
	for(char i = 0; i != CHAR_MAX ;i++ ) {

		//charが以下の時はそれを表示する
		switch(i) {
		case '\a' 	: cout << "\\a"; break;
		case '\b' 	: cout << "\\b"; break;
		case '\t' 	: cout << "\\t"; break;
		case '\n' 	: cout << "\\n"; break;
		case '\v' 	: cout << "\\v"; break;
		case '\f' 	: cout << "\\f"; break;
		case '\r' 	: cout << "\\r"; break;
		//上以外で表示のある文字はそれを、表示するものがなければ空白を出力する
		default  	: cout <<' '<< (isprint(i) ? i : ' ');
		}

		//char型の変数iがある数のとき表示される文字について種類を判定する
		if(isdigit(i)){
			cout <<" 数字";
		}
		if(isupper(i)) {
			cout << " 大文字";
		}
		if(islower(i)) {
			cout << " 小文字";
		}
		if(ispunct(i)) {
			cout << " 記号文字";
		}
		if(isspace(i)) {
			cout << " 空白文字";
		}

		cout << '\n';

	}
}
