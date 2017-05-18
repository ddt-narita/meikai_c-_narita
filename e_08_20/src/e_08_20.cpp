/* 演習08-20
 * 2つの文字列を指すポインタを交換する関数の作成
 * 作成日：5月17日
 * 作成者：成田修之
 */
#include<iostream>
using namespace std;

/* 関数change_point
 * 2つの文字列を指すポインタを交換する関数
 * 引数は2つのcharへのポインタ
 * 返却値はなし
 * 作成日：5月17日
 * 作成者：成田修之
 */

void change_point(const char** s1,const char** s2)
{
	//文字列Aへのポインタを避難させる
	 const char* chrTrade = *s1;
	//文字列Aへのポインタに文字列Bへのポインタを代入
	*s1 = *s2;
	//避難してあった文字列Aへのポインタを文字列Bへのポインタに代入
	*s2 = chrTrade;
}

int main()
{
	//文字列abcdeへのポインタA
	const char* chrStrA ="abcde";
	//文字列fghijklmnへのポインタB
	const char* chrStrB = "fghijklmn";

	//関数change_pointを呼び出してポインタを交換
	change_point(&chrStrA,&chrStrB);
	//交換後のポインタAの指す文字列を表示
	cout << chrStrA << "\n";
	//交換後のポインタBの指す文字列を表示
	cout << chrStrB << "\n";

	//main関数の返却値
	return 0;
}
