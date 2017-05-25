/* 演習14－03 ヘッダ部
 * 文字列クラスを教科書のコードを参考に作成
 * 作成日：5月25日
 * 作成者：成田修之
 */

#ifndef ___Class_String
#define ___Class_String
#include<cstring>
#include<string>

class String
{
	int len;		//文字列配列の長さ
	char* ptr;		//文字列の先頭を指すポインタ

public:

	//変換コンストラクタ
	String(const char* str);

	//コピーコンストラクタ
	String(const String& str);

	//デストラクタ
	~String(){
		delete []ptr;
	}

	//長さを返却する関数
	int Length() const {
		return len;
	}

	char* Ptr() const {
		return ptr;
	}

	String operator+(const String& str);

	String& operator=(const String& str);

	const char operator[](int i) {
		return ptr[i];
	}

};

std::ostream& operator<<(std::ostream& s, const String& x);

#endif
