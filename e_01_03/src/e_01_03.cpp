/* 演習 01-03
 * 文の終端；の欠如時の検証
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月8日
 * 更新者：成田修之 */

#include <iostream>
//文の終端に；を置かない
using namespace std

int main()
{
	//文の終端に；を置かずにサンプル文を表示
	cout << "初めてのC++プログラム。\n";

	//文の終端に；を置かずにサンプル文を表示
	cout << "画面に出力しています。\n"

	//返却値0
	return 0;
}
/*結果:コンパイルできずにエラーとなり、問題欄で；が足りないと指摘があった
 * また２つの文のうち片方のみに；がついている場合でもどちらに；を付けてもエラーと
 *なり実行できなかった。
 *using指令のほうに；を付けたが上のと同じ結果がえられた。
 */
