//演習０４－１１
//0.0～1.0まで0.001ずつ増やしながらその値とその値の2乗を表示する
//
//5月5日
//成田修之
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	//以降coutでは値を表示する際に精度を6桁に固定小数点記法に設定
	cout << fixed << setprecision(6);
	//iはカウント
	for(float i = 0.0F; i <= 1.0; i += 0.001F) {
		cout << i << ' ';

		//何乗するか
		int nPower = 2;

		//iのべき乗に使う変数
		float fiPower = 1;

		//n回fiPowerにiをかけたものを代入、jはカウント
		for (int j = 1; j <= nPower; j++) {
			fiPower *= i;
		}
		cout << fiPower << '\n';
	}
}
