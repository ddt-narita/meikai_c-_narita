/* 演習14-02 ヘッダ部
 * 自己初期化の際に不定値にならないようにコピーコンストラクタの多重定義
 * 作成日：5月25日
 * 作成者：成田修之
 */

//インクルードガード
#ifndef ___Class_IntArray
#define ___Class_IntArray

class IntArray {
	int nelem;	//配列クラスの要素数のデータメンバ
	int* vec;	//配列の先頭へのポインタ

public:
	//明示的なコンストラクタの定義
	explicit IntArray(int size):nelem(size) {
		//要素数分の領域を確保して先頭のポインタに設定
		vec = new int[nelem];
	}

	//コピーコンストラクタの宣言
	IntArray(const IntArray& x);

	//デストラクタの定義
	~IntArray() {
		//
		delete[] vec;
	}

	//要素数を返却する関数
	int size() const {
		//要素数のデータを返却
		return nelem;
	}

	//演算子＝の多重定義
	IntArray& operator=(const IntArray& x);

	//添字演算子の多重定義
	int & operator[](int i) {
		//オブジェクトの添字の時の要素を返却
		return vec[i];
	}
};

//インクルードガードの終わり
#endif
