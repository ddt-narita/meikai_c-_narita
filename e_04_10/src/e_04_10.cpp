/* 演習 04-10
 * list04-15とlist04-26を横に並べて表示
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

//操作子を使うのに必要なヘッダ
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{

	//最初のfloatとintのラベル位置を設定
	cout << setw(6) << right << "float" << setw(6) << " " << "int\n";
	//以降の数字を精度6で表示
	cout << fixed << setprecision(6);

	//はじめfor分の中に入れてしまい、いつまでもfloat側の値が0.00000のままだった
	//for文の中に入れるものを気を付ける
	float j = 0.0F; //増えていく数

	//1000まで続ける
	for(int i = 0; i <= 1000; i++) {
		float k = static_cast<float>(i) / 1000; //カウントの値を1000で割って0.001ずつ増えていく数
		//float型を表示
		cout << j << "  ";
		//int型を表示
		cout << k << " \n";
		//0.001Fずつfloat型のまま増えていく
		j += 0.001F;
	}
	//main関数の返却値0
	return 0;
}
