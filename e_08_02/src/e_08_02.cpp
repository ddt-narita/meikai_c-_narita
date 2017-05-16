/* 演習08-02
 * 初期化されている文字列ｓをから文字列にするコードの作成
 * 作成日：5月16日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	//初期化された配列s
	char s[] = "ABC";

	//配列sの文字列を表示
	cout << s << "\n";
	//要素数3回分繰り返す
	for(int i = 0; i < 3; i++) {
		//各要素に0を代入
		s[i] = 0;
	}
	//代入し終えた後の文字列を表示
	cout << s;
}
