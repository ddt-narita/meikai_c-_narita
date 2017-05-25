/* 演習14－02 ソース部
 * 自己初期化が行われたときにデータに不定値が設定されないようにコピーコンストラクタを改良
 * 作成日：5月25日
 * 作成者：成田修之
 */

#include"e_14_02.h"


IntArray::IntArray(const IntArray& x)
{
	//コピー対象が自分自身ではない時
	if(&x != this) {
		//要素数をコピー
		nelem = x.nelem;
		//要素数分確保した領域の先頭ポインタに設定
		vec = new int[nelem];
		//要素数分繰り返す
		for(int i =0; i < nelem; i++) {
			//各要素をコピーする
			vec[i] = x.vec[i];
		}
	//自分自身を対象とするとき
	} else {
		//要素数を1に設定
		nelem = 1;
		//一つの領域を確保して先頭にポインタを設定
		vec = new int[nelem];
		//先頭を1で初期化
		vec[0] = 1;
	}

}

//
IntArray& IntArray::operator=(const IntArray& x)
{
	//代入対象が自分自身ではない時
	if(&x != this) {
		//要素数が違うとき
		if(nelem!= x.nelem) {
			//元の確保領域を解放
			delete[]vec;
			//要素数をコピー
			nelem = x.nelem;
			//コピーした要素数分の領域の先頭にポインタを設定
			vec = new int[nelem];
		}
		//要素数分繰り返す
		for(int i = 0; i < nelem; i++) {
			//各要素をコピーする
			vec[i] = x.vec[i];
		}
	}
	//コピーしたオブジェクトを返却
	return *this;
}
