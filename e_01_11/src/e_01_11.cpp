#include<iostream>									//main
using namespace std;								/*キーボードから読み込んだ
													実数値の合計と平均*/
													//
int main(){										//5月1日
	//ｘとｙを実数値を扱えるdouble型で宣言			//成田修之
	double x,y;
	cout<<"ｘの値：";
	cin>>x;
	cout<<"ｙの値：";
	cin>>y;

	//double型なので平均でも実数が扱えることを確認
	cout<<"合計は"<<x+y<<"です。\n";
	cout<<"平均は"<<(x+y)/2<<"です。\n";
}
