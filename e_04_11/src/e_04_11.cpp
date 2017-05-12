/* 演習 04-11
 * 0.0～1.0まで0.001ずつ増やしながらその値とその値の2乗を表示する
 * 作成日：5月5日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者；成田修之
 */

//操作子を使うのに必要なヘッダ
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
		float floPower = 1;

		//n回fiPowerにiをかけたものを代入、jはカウント
		for (int j = 1; j <= nPower; j++) {
			floPower *= i;
		}
		//べき乗したものを表示
		cout << floPower << '\n';
	}
	//main関数の返却値
	return 0;
}
