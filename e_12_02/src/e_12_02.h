/* 演習12-02
 * クラスbooleanに対してvがFalseならbool型のtrueを、trueならbool型のfalseを
 * 返却する演算子関数！の追加
 * 作成日：5月23日
 * 作成者：成田修之
 */

//インクルードガード
#ifndef ___Class_Boolean
#define ___Class_Boolean

#include<iostream>

//クラスBoolean
class Boolean
{
public:

	//列挙帯を設定
	enum boolean {False,True};

private:

	//データメンバ
	boolean v;

public:

	//Falseで初期化するデフォルトコンストラクタ
	Boolean() : v(False)
	{
	}

	//引数が0ならFalse、それ以外ならTrueで初期化するコンストラクタ
	Boolean(int val) : v(val == 0? False: True)
	{

	}

	//int型への変換関数
	operator int() const {
		//データメンバを0か1で返却
		return v;
	}

	//const char*型への変換関数
	operator const char*() const {
		//データメンバを文字列表現にして返却する
		return v == False ? "False" : "True";
	}

	//論理演算子！の多重定義
	bool operator! () {
		//データメンバvがFalseならbool型のtrueを、Trueならbool型のfalseを返却
		return v == False ? true : false;
	}
};

//挿入子の多重定義
inline std::ostream& operator<< (std::ostream& s, Boolean& x)
{
	//Boolean型をconst char*型に静的にキャストする出力ストリームを返却
	return s <<static_cast<const char*>(x);
}

//インクルードの終わり
#endif
