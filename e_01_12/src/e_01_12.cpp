/*演習 01-12
 * 底辺と高さの値を読み込んで面積計算
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者；成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	//面積を求めることの明示
	cout<<"三角形の面積を求めます。\n";

	int nBase;		//底辺の長さの入力に使う
	int nHeight;	//高さの値の入力に使う

	//底辺の長さの値の入力を促す
	cout	<<	"底辺：";
	//キーボードから入力
	cin 	>>	nBase;

	//高さの値の入力を促す
	cout 	<<	"高さ：";
	//キーボードから入力
	cin 	>>	nHeight;

	//三角形の面積の公式は底辺(x)*高さ(y)/2で面積表示
	cout << "面積は" << nBase * nHeight / 2 << "です。\n";

	//返却値0
	return 0;
}
