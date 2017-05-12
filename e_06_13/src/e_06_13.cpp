/* 演習06-13
 * list6-14にa=yを追加して挙動を確認
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;
int main()
{

	int		nSampleX = 1;			//参照先のオブジェクトX
	int 	nSampleY = 2;			//参照先以外のオブジェクトY
	int& 	nSampleA = nSampleX;	//nSampleXを参照とするオブジェクトA

	//Aについて表示
	cout << "a =" << nSampleA << "\n";
	//Xについて表示
	cout << "x =" << nSampleX << "\n";
	//Yについて表示
	cout << "y =" << nSampleY << "\n";

	//Xを参照先とするAの値に5を代入したときのそれぞれの値を確認する
	nSampleA = 5;
	cout << "Aに5を代入したときのそれぞれの値を確認する\n";

	//Aについて表示
	cout << "a =" << nSampleA << "\n";
	//Xについて表示
	cout << "x =" << nSampleX << "\n";
	//Yについて表示
	cout << "y =" << nSampleY << "\n";

	//AにYを代入したときのそれぞれの値を確認する
	nSampleA = nSampleY;
	cout << "AにYを代入したときのそれぞれの値を確認する\n";

	//Aについて確認する
	cout << "a =" << nSampleA << "\n";
	//Xについて確認する
	cout << "x =" << nSampleX << "\n";
	//Yについて確認する
	cout << "y =" << nSampleY << "\n";

	//main関数の返却値
	return 0;
}
/*AにYを代入したとき、すべての値が2になっていたのでAに代入されたYの値がAの
 * 参照先のXにも代入されていたことが確認できた。
 */
