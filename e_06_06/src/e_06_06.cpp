/* 演習06-06
 * 「こんにちは」と表示する関数helloの作成
 * 作成日：5月11日
 * 作成者：成田修之
 */
#include<string>
#include<iostream>
using namespace std;

/* void関数hello
 * 「こんにちは」と表示する関数
 * 引数はstring型のstrHello
 * 返却値はなし
 * 作成日：5月11日
 * 作成者：成田修之
 */

void hello(string strHello )
{

	//Yかyが入力された時
	if(strHello == "y" || strHello == "Y") {
		//helloを表示
		cout << "hello";
	}
}


int main()
{
	//表示するかどうか判定するのに使う変数
	string strHello;
	//表示するかどうか入力を促す表示
	cout << "helloと表示しますか？Y…yes,N…no：";
	//キーボードから入力
	cin >> strHello;

	//関数helloを呼び出す
	hello(strHello);

	//main関数の返却値
	return 0;
}
