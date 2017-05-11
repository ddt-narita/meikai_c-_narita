/* 演習03-17
 * list3-1を月を読み込む際1から12以外が入力されたときに再入力を求めるようにする
 * 作成日：5月3日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

//文字列を扱うstring型を含んだヘッダ
#include<string>
#include<iostream>
using namespace std;

int main ()
{
	string strRetry;	//繰り返すかどうか入力する際に使う変数

	//入力された値の季節を求めるのstrRetryにYかｙが入力される限り繰り返す
	do{
		int nMonth;

		//1～12以外の数が入力されると繰り返す
		do{
			//判定する月の入力を促す表示
			cout	<< "季節を求めます。\n何月ですか：";
			//キーボードから入力
			cin		>> nMonth;

		//入力された値が1から12以外の数値の時繰り返す
		} while(nMonth < 1 || nMonth > 12);

		//入力された値が3から5の時
		if(nMonth >= 3 && nMonth <= 5){
			//春であることを表示
			cout << "それは春です。\n";

		//入力された値が6から8の時
		} else if (nMonth >= 6 && nMonth <= 8){
			//夏であることを表示
			cout << "それは夏です。\n";

		//入力された値が9から11の時
		} else if(nMonth >= 9 && nMonth <= 11){
			//秋であることを表示
			cout << "それは秋です。\n";

		//それ以外の時（12と1と2）
		} else {
			//冬であることを表示
			cout << "それは冬です。\n";
		}

		//判定をもう一度繰り返すかを入力を促す表示
		cout	<<	"もう一度？Y…Yes/N…No：";
		//繰り返すならYかyを終了するならNかnをキーボードから入力
		cin		>> strRetry;

	//Yかyが入力されれば繰り返す
	} while(strRetry == "Y" || strRetry == "y");

	//main関数の返却値0
	return 0;
}
