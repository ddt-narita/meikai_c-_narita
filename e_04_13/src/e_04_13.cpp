//演習０４－１３
//性別、季節　曜日などを表す列挙帯を自由に定義しそれを用いたプログラムの作成
//
//5月5日
//成田修之
#include <iostream>
using namespace std;
int main()
{
	//列挙帯名season列挙子Spring,Summer,Autumn,Winter
	enum season {Spring, Summer, Autumn, Winter, Invalid};

	//最初に下のfor入るために0～4以外で初期化
	int nInputSeason = -1;


	for( ; nInputSeason < Spring || nInputSeason > Invalid; ) {
		cout << "季節を入力してください。対応する月を表示します。\n"
				"0…春、1…夏、2…秋、3…冬、4…終了：";
		cin >> nInputSeason;
	}

	//Invalid以外ならそれに該当する月を表示
	if(nInputSeason != Invalid) {
		switch(nInputSeason) {
		case Spring: cout << "春は3月から5月です。\n";	break;
		case Summer: cout << "夏は6月から8月です。\n";	break;
		case Autumn: cout << "秋は9月から11月です。\n";	break;
		case Winter: cout << "冬は12月から2月です。\n";	break;
		}
	}
}
