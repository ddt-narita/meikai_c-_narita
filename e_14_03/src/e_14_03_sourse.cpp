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
		len = strlen(str);
		ptr = new char[len];
		for(int i = 0; i < len; i++) {
			ptr[i] = str[i];
		}
}

//コピーコンストラクタ
String::String(const String& str) {

	if(&str != this) {
		len = str.len;
		ptr = new char[len];
		for(int i = 0; i < len; i++) {
			ptr[i] = str.ptr[i];
		}
	}
}

String String::operator +(const String& str)
{
	String plus = *this;
	plus.len = len + str.len;
	delete[] plus.ptr;

	plus.ptr = new char[plus.len];

	for(int i = 0; i < len; i++) {
		plus.ptr[i] = ptr[i];
	}
	for(int i = 0; i < str.len; i++) {
		plus.ptr[i + len] = str.ptr[i];
	}

	return plus;
}


String& String::operator=(const String& str)
{
	if(&str != this) {
		if(len != str.len) {
			delete[]this;
			len = str.len;
			ptr = new char[len];
		}
		for(int i = 0; i < len; i++) {
			ptr[i] = str.ptr[i];
		}
	}
	return *this;
}



std::ostream& operator<<(std::ostream& s,const String& x) {

	return s  << x.Ptr();
}







