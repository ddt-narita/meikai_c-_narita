/* 演習12-03　メイン部
 * 演習11-03で作成した時刻クラスに各種演算子関数を追加
 * 作成日：5月23日
 * 作成者：成田修之
 */

#include<iostream>
#include"e_12_03.h"

using namespace std;

int main()
{
	Times timeA;			//任意の時間を入力するためのオブジェクトA
	Times timeB;			//任意の時間を入力するためのオブジェクトB

	//キーボードから入力
	cin >> timeA;
	//キーボードから入力
	cin >> timeB;

	//入力された2つの時刻が同じときに同じであることを表示
	if(timeA == timeB) {
		cout << "入力された2つの時刻が同じです。\n";
	}

	//2つの時刻を足した時刻を表示することを明示
	cout << "2つの時刻を足した時刻を表示します。\n";
	//2つの時刻を足して表示
	cout << timeA + timeB;
}
