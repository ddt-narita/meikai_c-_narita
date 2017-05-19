/* 演習10-01
 * 名前、身長、体重などをメンバとして持つ<人間クラス>を自由に定義
 * 作成日：5月19日
 * 作成者：成田修之
 */

#include<iostream>
#include<string>
//クラス定義とメンバ関数の入ったヘッダをインクルード
#include"e_10_01.h"
using namespace std;

int main ()
{
	string fullname;	//名前の入力に使う
	int year;			//年齢の入力に使う
	int height;			//身長の入力に使う
	int weight;			//体重の入力に使う
	double vision;		//視力の入力に使う

	//データの入力を促す
	cout << "あなたのデータを入力してください\n";
	//名前の入力を促す
	cout << "名前：";
	//キーボードから入力
	cin  >> fullname;
	//年齢の入力を促す
	cout << "年齢：";
	//キーボードから入力
	cin  >> year;
	//身長の入力を促す
	cout << "身長：";
	//キーボードから入力
	cin  >> height;
	//体重の入力を促す
	cout << "体重：";
	//キーボードから入力
	cin  >> weight;
	//視力の入力を促す
	cout << "視力：";
	//キーボードから入力
	cin  >> vision;

	//コンストラクタを呼び出してオブジェクトYourDetaを定義
	Person YourDeta (fullname,year,height,weight,vision);
	//メンバ関数print_specを呼び出して情報を表示
	YourDeta.print_spec();

	//main関数の返却値
	return 0;


}
