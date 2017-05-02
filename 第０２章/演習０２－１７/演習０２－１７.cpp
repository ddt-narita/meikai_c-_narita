#include<iostream>					//main
using namespace std;				/*double型のaとint型のbで「a=b=1.5」を行うと
									aとbの値は*/
									//
int main(){						//5月2日
									//成田修之
	//aをdouble型でbをint型で宣言
	double a;
	int b;

	//この計算を行った時の計算順序などを確認する
	a=b=1.5;

	cout <<"double型のaとint型のbで「a=b=1.5」を行うと…\n";
	cout <<"aの値は："<<a<<"です。\n";
	cout <<"bの値は："<<b<<"です。\n";

}
//結果：a=b=1.5の計算では先にint型のbに1.5が代入されるのが先でその後a=bの計算を
//行うと思われる。よってbはint型なので1.5の小数部は切り捨てられるのでaとbどちらも
//同じ１という値をとる。
//またb=a=1という式であるならa=1.5,b=1という結果が得られるのでは無いかと思われる
