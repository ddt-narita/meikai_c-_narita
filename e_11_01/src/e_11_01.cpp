/* 演習11-01
 * 時、分、秒のデータメンバで構成されている、時刻クラスを作成コンストラクタや
 * メンバ関数については自由に設計
 * 作成日：5月19日
 * 作成者：成田修之
 */

#include<iostream>
#include"e_11_01.h"
using namespace std;

int main()
{
	int nDay;		//誕生日の入力に使う変数
	int nMonth;		//誕生日の入力に使う変数
	int nYear;		//誕生日の入力に使う変数

	//誕生日の入力を促す
	cout << "誕生日を入力してください：\n";
	//生まれ年
	cout << "年：";
	//キーボードから入力
	cin  >> nYear;
	//生まれ月
	cout << "月：";
	//キーボードから入力
	cin  >> nMonth;
	//生まれ日
	cout << "日";
	//キーボードから入力
	cin  >> nDay;

	//コンストラクタを読んでデータメンバを初期化
	Date birthday(nYear,nMonth,nDay);

	//誕生日を確認する
	cout << "誕生日は" << birthday.year() << "年" << birthday.month();
	cout << "月 " << birthday.day() <<"日ですね？\n";

	//何歳かを入力するのに使う変数
	int nOld;
	//今年で何歳になるかを入力
	cout << "今年で何歳になりますか：";
	//キーボードから入力
	cin  >> nOld;

	//生まれた月に加算する
	birthday.year_spend(nOld);

	//今年が何年か表示
	cout << "今年は" << birthday.year() << "年ですね？";

	//main関数の返却値
	return 0;
}
