/* 演習 01-05
 * 01-04から性と名の間に1行開けて表示
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月8日
 * 更新者：成田修之*/

#include <iostream>
using namespace std;

int main()
{
	//自分の名前を1行1文字で表示（1文字毎に改行文字を出力
	cout << "成\n";		//苗字の"成"
	cout << "田\n";		//苗字の"田"

	//苗字と名前の間は1段落開ける
	cout << "\n";		//苗字と名前の間の改行文字
	cout << "修\n";		//名前の"修"
	cout << "之\n";		//名前の"之"

	//返却値0
	return 0;
}
/*ワークスペースを移した際のコピーをし忘れそのまま確認せず提出してしまいすみませんでした。
 * ワークスペースを移した時の範囲に関してもう一度ビルド、デバック、動作確認を
 * してから提出したいと思います。
 */
