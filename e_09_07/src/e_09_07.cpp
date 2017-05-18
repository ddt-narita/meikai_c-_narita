/* 演習09-07
 * list9-15で名前空間Japaneseに関西弁を表す名前空間Osakaを加えて作成
 * 作成日：5月18日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

//名前空間Englishを定義
namespace English
{
	//xに１を代入
	int x = 1;
	//xの値を表示する関数
	void print_x()
	{
		//xの値を表示
		cout << "the value of x is " << x << ".\n";
	}
	//helloと表示する関数
	void hello()
	{
		//helloと表示
		cout << "Hello!\n";
	}
}

//名前空間Japaneseを定義
namespace Japanese
{
	//xを初期化
	int x = 2;
	//xの値を表示する関数
	void print_x()
	{
		//ｘの値を表示
		cout << "変数xの値は" << x << "です。\n";
	}
	//こんにちはと表示する関数
	void hello()
	{
		//こんにちはと表示
		cout << "こんにちは！\n";
	}
	//名前空間Japanese中の名前空間Osakaを定義
	namespace Osaka
	{
		//xに代入
		int x = 1;
		//xの値を表示する関数
		void print_x()
		{
			//xの値を表示
			cout << "変数xの値は" << x << "でっせ。\n";
		}
		//関西弁の挨拶を表示する関数
		void hello()
		{
			//挨拶を表示
			cout << "もうかってまっか？\n";
		}
	}
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
