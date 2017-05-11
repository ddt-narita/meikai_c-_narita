/* 演習02-17
 * double型のaとint型のbで[a=b=1.5]を行ったときの検証
 * 作成日：5月2日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之 */

#include<iostream>
using namespace std;

int main(){


	double dblInputA;	//double型の変数を宣言
	int nInputB;		//int型の変数を宣言

	//この計算を行った時の計算順序などを確認する
	dblInputA = nInputB = 1.5;

	//行ったことの表示
	cout << "double型のaとint型のbで「a=b=1.5」を行うと…\n";
	//aの値がどうなってるか確認
	cout << "aの値は：" << dblInputA << "です。\n";
	//bの値がどうなっているか確認
	cout << "bの値は：" << nInputB << "です。\n";

	//main関数の返却値0
	return 0;
}
/*結果：a=b=1.5の計算では代入演算子は結合規則が右結合なので先にint型のbに1.5が
 * 代入されるのでその後a=bの計算を行うと思われる。よってbはint型なので1.5の
 * 小数部は切り捨てられるのでaとbどちらも同じ１という値をとる。またb=a=1.5という
 * 式であるならa=1.5,b=1という結果が得られるのでは無いかと思われる
 */

