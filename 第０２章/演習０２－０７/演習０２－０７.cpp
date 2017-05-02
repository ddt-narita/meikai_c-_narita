#include <iostream>					//main
using namespace std;					//2つの実数値のうち大きいほうを表示
										//
int main() {							//5月1日
										//成田修之
	//実数値なのでdouble型で宣言する
	double a,b;

	cout <<"実数値a：";		cin >>a;
	cout <<"実数値b："; 	cin >>b;

	//条件演算子を使ってmaxを評価する
	double max = a>b?a:b;
	cout <<"大きいほうの値は"<<max<<"です。\n";
}
