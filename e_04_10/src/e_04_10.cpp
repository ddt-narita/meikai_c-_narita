#include<iomanip>
#include<iostream>
using namespace std;
int main()
{


	cout << setw(6) << right << "float" << setw(6) << " " << "int\n";
	cout << fixed << setprecision(6);

	//はじめfor分の中に入れてしまい、いつまでもfloat側の値が0.00000のままだった
	//for文の中に入れるものを気を付ける

	float j = 0.0F; //増えていく数

	for(int i = 0; i <= 1000; i++) {
		float k = static_cast<float>(i) / 1000; //カウントの値を1000で割って0.001ずつ増えていく数
		cout << j << "  ";
		cout << k << " \n";
		j += 0.001F; //0.001Fずつfloat型のまま増えていく
	}
}
