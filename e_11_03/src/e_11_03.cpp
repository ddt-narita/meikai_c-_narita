/* 演習11-03
 * 演習11-01の自国クラスに挿入子と抽出子を追加
 * 作成日：5月21日
 * 作成者：成田修之
 */
#include<iostream>
#include"e_11_03.h"
using namespace std;

//デフォルトコンストラクタ
Date::Date()
{
		Year = 1;		//引数を受け取らない時は年を1で初期化
		Month = 1;		//引数を受け取らない時は月を1で初期化
		Day = 1;		//引数を受け取らない時は日を1で初期化
}

int main()
{
	Date birthday;

	//誕生日の入力を促す
	cout << "誕生日を入力してください：\n";
	cin >> birthday;

	//誕生日を確認する
	cout << "誕生日は" << birthday << "日ですね？\n";

	//何歳かを入力するのに使う変数
	int nOld;
	//今年で何歳になるかを入力
	cout << "今年で何歳になりますか：";
	//キーボードから入力
	cin  >> nOld;

	//今年が何年か表示
	cout << "今年は" << birthday.this_year(nOld) << "年ですね？";

	//main関数の返却値
	return 0;
}

