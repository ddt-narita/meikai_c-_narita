/* 演習06-15
 * x時y分の時刻をそのdy分後へ更新する関数spendの作成。ただし時刻は24時制で
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* void関数spend
 * x時y分の時刻をそのdy分後へ更新する。ただし24時制
 * 引数はint型の2つの整数
 * 返却値は無し
 * 作成日：5月12日
 * 作成者：成田修之
 */

void spend (int& nHour,int& nMinute,int nMinuteAfter);

int main()
{
	int nHour = 100;			//時間の入力に使う変数
	int nMinute = 100;		//分の入力に使う変数
	int nMinuteAfter;	//何分後かの入力に使う変数

	//自国の入力をしてもらうことの明示
	cout 	<< "時刻を入力してください\n";

	for(; nHour >= 24;){
		//時間の入力を促す
		cout 	<< "何時：";
		//キーボードから入力
		cin		>> nHour;
	}
	for(;nMinute >= 60;) {
		//何分かの入力を促す
		cout 	<< "何分：";
		//キーボードから入力
		cin		>> nMinute;
	}

	//何分後を表示したいか入力をしてもらうことの明示
	cout 	<< "何分後を表示しますか。\n";
	//何分後かを入力するように促す表示
	cout	<< "何分後：";
	//キーボードから入力
	cin		>> nMinuteAfter;

	//関数spendを呼び出し時刻を更新する
	spend(nHour,nMinute,nMinuteAfter);

	//更新した時刻を表示
	cout << "更新後の時刻は" << nHour << "時" << nMinute << "分" <<"です。\n";

	//main関数の返却値
	return 0;
}


void spend (int& nHour,int& nMinute,int nMinuteAfter)
{

	//時間と分は参照する値なので足したもの初期値とした変数を宣言
	int nMinutePlus = nMinute + nMinuteAfter;

	//足したものが60未満の時
	if(nMinutePlus < 60) {
		//時間はそのままに分だけに何分後か入力されたものを加えて代入
		nMinute += nMinuteAfter;
	//60以上の時
	} else {
		//1時間は60分であり、分は60以上にならないので
		//足したものが60未満になるまで繰り返す
		for(int i = 0; nMinutePlus >= 60; i++) {
			//60引いて代入する
			nMinutePlus -= 60;
			//60分を越すたびに時間のほうをインクリメントする
			nHour++;
		}
		//60未満になったものが更新後の分だから代入（参照する）
		nMinute  = nMinutePlus;


		//24時以上にならないように時刻は24で割った剰余とする
		nHour %= 24;
	}

}
