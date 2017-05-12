/* 演習04-13
 * 性別、季節、曜日などを表す列挙帯を自由に定義しそれを用いたプログラムの作成
 * 作成日：5月5日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 * */
#include <iostream>
using namespace std;
int main()
{
	//列挙帯名season列挙子Spring,Summer,Autumn,Winter
	enum season {Spring, Summer, Autumn, Winter, Invalid};

	//最初に下のforに入るために0～4以外で初期化
	int nInputSeason = -1;


	//0から4以外の入力があると繰り返す
	for( ; nInputSeason < Spring || nInputSeason > Invalid; ) {
		//入力を促す
		cout << "季節を入力してください。対応する月を表示します。\n"
				"0…春、1…夏、2…秋、3…冬、4…終了：";
		//キーボードから入力
		cin >> nInputSeason;
	}

	//Invalid以外ならそれに該当する月を表示
	if(nInputSeason != Invalid) {
		//入力された値によって分岐
		switch(nInputSeason) {
		//0（春）が入力されたとき
		case Spring: cout << "春は3月から5月です。\n";	break;
		//1（夏）の時
		case Summer: cout << "夏は6月から8月です。\n";	break;
		//2（秋）の時
		case Autumn: cout << "秋は9月から11月です。\n";	break;
		//3（冬）の時
		case Winter: cout << "冬は12月から2月です。\n";	break;
		}
	}

	//main関数の返却値
	return 0;
}
