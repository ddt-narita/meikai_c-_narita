/* 演習06-18
 * 静的記憶域期間を持つ配列の全要素が０で初期化されることを確認するプログラムを作成
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;


int main()
{

	const int nArrayNumber = 6;		//配列nArrayの要素数
	static int nArray[nArrayNumber];	//静的記憶域期間を持つ配列

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber;i++) {
		//各要素を表示
		cout << "nArray[" << i << "] = " << nArray[i] << "\n";
	}
}
