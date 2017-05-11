/* 演習06-08
 * list6-8をその内部でlist6-9を呼び出すことによって表示するように書き換える
 * 作成日：5月11日
 * 作成者：成田修之
 */
#include<iostream>
using namespace std;
/* void関数put_char
 * 文字cをn個連続で表示する
 * 引数はint型とchar型
 * 返却値は無し
 * 作成日：5月11日
 * 作成者：成田修之
 */
void put_char(int nInput,char cAster)
{
	//入力された値が0より大きい限り繰り返す
	while(nInput-- > 0){
		//引数cAster（＊）を表示
		cout << cAster;
	}
}

/* void関数put_stars
 * put_charを呼び出し文字'*'を連続で表示する
 * 引数はint型の整数
 * 返却値は無し
 * 作成日：5月11日
 * 作成者：成田修之
 */

void put_stars(int nInput)
{
	//関数put_charを引数nInputと'*'で呼び出す
	put_char(nInput,'*');

}

int main()
{
	int nInput;		//段数を入力するための変数
	//段数の入力を促す表示
	cout << "左下直角の三角形を表示します。\n";
	cout << "段数は：";
	//キーボードから入力
	cin >> nInput;

	//入力した段数分繰り返す
	for(int i = 1; i <= nInput; i++) {
		//関数put_starsを呼び出しその段数目文アスタリスクを表示
		put_stars(i);
		//段数が変わるときに改行
		cout << "\n";
	}
	//main関数の返却値
	return 0;
}
