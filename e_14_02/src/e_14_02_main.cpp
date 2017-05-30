/* 演習14－02 メイン部
 * 自己初期化が行われたときにデータに不定値が設定されないようにコピーコンストラクタを改良
 * 作成日：5月25日
 * 作成者：成田修之
 */

#include<iostream>
#include<new>
#include"e_14_02.h"

using namespace std;

int main()
{
	try{
		//自分自身で初期化して不定値で初期化されていないことを確認する
		IntArray x = x;
		//自分自身で初期化したときの要素数を表示
		cout << x.size() << "\n";
		//自分自身で初期化したときの先頭の要素がちゃんと設定したとおりになっているか確認
		cout << x[2] << "\n";

		//添字のオーバーフローが発生した際に投げられるクラスIdxRngErrをキャッチしたとき
	} catch(IntArray::IdxRngErr& x) {
		cout << "添字オーバーフロー：" << x.index() << "\n";
		return 1;

		//bad_allocに含まれる例外が投げられてキャッチしたとき
	} catch(bad_alloc&) {
		cout << "メモリの確保に失敗しました。\n";
		return 1;
	}

}
