#include<iostream>								//main関数
using namespace std;							//底辺と高さの値を読み込んで面積計算
												//
int main(){									//5月1日
	cout<<"三角形の面積を求めます。\n";			//成田修之
	int x;
	int y;

	//底辺と高さの値を入力
	cout <<"底辺：";
	cin >> x;
	cout <<"高さ：";
	cin >> y;

	//面積の公式は底辺(x)*高さ(y)/2
	cout <<"面積は"<<x*y/2<<"です。\n";
}
