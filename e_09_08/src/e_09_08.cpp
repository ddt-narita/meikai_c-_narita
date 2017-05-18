/* 演習09－08
 * 演習09－07を名前空間の宣言と定義を分離して作成
 * 作成日：5月18日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

//名前空間メンバEnglishの宣言
namespace English
{
	//xの宣言
	extern  int x;
	//関数print_xの宣言
	void print_x();
	//関数helloの宣言
	void hello();
}
//名前空間メンバJapaneseの宣言
namespace Japanese
{
	//xの宣言
	extern  int x;
	//関数print_xの宣言
	void print_x();
	//関数helloの宣言
	void hello();
	//名前空間メンバJapanese中の名前空間メンバOsakaの宣言
	namespace Osaka
	{
		//xの宣言
		extern  int x;
		//関数print_xの宣言
		void print_x();
		//関数helloの宣言
		void hello();
	}
}

//名前空間メンバEnglishのｘの定義
int English::x = 1;
//名前空間メンバEnglishの関数print_xの定義
void English::print_x()
{
	//xの値を表示
	cout << "The value of x is " << x << "\n";
}

//名前空間メンバEnglishの関数helloの定義
void English::hello()
{
	//helloと表示
	cout << "Hello!\n";
}

//名前空間メンバJapaneseのxの値定義
int Japanese::x = 2;
//名前空間メンバJapaneseの関数print_xを定義
void Japanese::print_x()
{
	//xの値を表示
	cout << "変数xの値は " << x << "です。\n";
}
//名前空間メンバJapaneseの関数helloを定義
void Japanese::hello()
{
	//挨拶を表示
	cout << "こんにちは!\n";
}

//名前空間メンバJapanese中の名前空間メンバOsakaのxの値を定義
int Japanese::Osaka::x = 1;
//名前空間メンバJapanese中の名前空間メンバOsakaの関数を定義
void Japanese::Osaka::print_x()
{
	//xの値を表示
	cout << "変数xの値は" << x << "でっせ。\n";
}
//名前空間メンバJapanese中の名前空間メンバOsakaの関数を定義
void Japanese::Osaka::hello()
{
	//挨拶を表示
	cout << "もうかってまっか？\n";
}



int main()
{
	//名前空間Englishのｘを表示
	cout << "English::x = " << English::x << "\n";
	//名前空間Englishの関数print_xを呼び出して表示
	English::print_x();
	//名前空間Englishの関数helloを呼び出して表示
	English::hello();

	//名前空間Japaneseのｘを表示
	cout << "Japanese::x = " << Japanese::x << "\n";
	//名前空間Japaneseの関数print_xを呼び出して表示
	Japanese::print_x();
	//名前空間Japaneseの関数helloを呼び出して表示
	Japanese::hello();


	//名前空間Japaneseの中の名前空間Osakaのｘを表示
	cout << "Japanese::Osaka::x = " << Japanese::Osaka::x << "\n";
	//名前空間Japaneseの中の名前空間Osakaの関数print_xを呼び出して表示
	Japanese::Osaka::print_x();
	//名前空間Japaneseの中の名前空間Osakaの関数helloを呼び出して表示
	Japanese::Osaka::hello();

	//main関数の返却値
	return 0;
}

