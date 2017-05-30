/* 演習14－03 ソース部
 * 文字列クラスを教科書のコードを参考に作成
 * 作成日：5月25日
 * 作成者：成田修之
 */

#include"e_14_03.h"
#include<sstream>
#include<iostream>
#include<cstring>

//変換コンストラクタ
String::String(const char* str)
{
	//文字列の長さを代入
	len = strlen(str);
	//長さとナル文字分の領域確保
	ptr = new char[len + 1];
	//長さ分だけ繰り返して各要素をコピー
	for(int i = 0; i < len; i++) {
		ptr[i] = str[i];
	}
	//文字列の最後をナル文字で代入して文字化けを防ぐ
	//最後の要素がlen+1ではないことに注意（訂正した）
	ptr[len] = 0;
}

//コピーコンストラクタ
String::String(const String& str) {
	//コピーの対象が自分自身ではない時
	if(&str != this) {
		//長さをコピー先に合わせる
		len = str.len;
		//合わせた長さとナル文字分の領域を確保
		ptr = new char[len + 1];
		//長さ分だけ繰り返して各要素をコピー
		for(int i = 0; i < len; i++) {
			ptr[i] = str.ptr[i];
		}
		//文字列の最後をナル文字を代入して文字化けを防ぐ
		//最後の要素がlen+1ではないことに注意（訂正した）
		ptr[len] = 0;
	}
}

//
String String::operator +(const String& str)
{
	//元のオブジェクトで初期化されたオブジェクトを作る
	String plus = *this;
	//長さを足した分の長さに設定
	plus.len = len + str.len;
	//初期化されて確保してた領域を解放
	delete[] plus.ptr;

	//足し合わせた長さとナル文字分領域を確保
	plus.ptr = new char[plus.len + 1];

	//元のオブジェクトの長さ分繰り返してコピー
	for(int i = 0; i < len; i++) {
		plus.ptr[i] = ptr[i];
	}
	//元のオブジェクトの最後のコピー先から足す側の要素を順にコピーしていく
	for(int i = 0; i < str.len; i++) {
		plus.ptr[i + len] = str.ptr[i];
	}
	//文字列の最後をナル文字を代入して文字化けを防ぐ
	//最後の要素がlen+1ではないことに注意（訂正した）
	ptr[plus.len] = 0;
	//足し合わせて作られた文字列を返却
	return plus;
}

//代入演算子の多重定義
String& String::operator=(const String& str)
{
	//代入するのが自身でない時
	if(&str != this) {
		//コピーする長さが同じでない時
		if(len != str.len) {
			//元のオブジェクトの領域を解放
			delete[]this;
			//長さをコピー
			len = str.len;
			//長さとナル文字分領域を確保
			ptr = new char[len + 1];
		}
		//長さ分繰り返して各要素をコピー
		for(int i = 0; i < len; i++) {
			ptr[i] = str.ptr[i];
		}
		//最後の文字をナル文字にして文字化けを防ぐ
		//最後の要素がlen+1ではないことに注意（訂正した）
		ptr[len] = 0;
	}
	//コピーした自身の参照を返却
	return *this;
}


//挿入子の多重定義
std::ostream& operator<<(std::ostream& s,const String& x) {
	//オブジェクトの先頭の文字へのポインタを返却する
	return s  << x.Ptr();
}

