/* 演習10-02
 * 自動車クラスCarにデータメンバやメンバ関数を自由に追加する
 * 作成日：5月19日
 * 作成者：成田修之
 */

#include<iostream>
#include<string>
#include"e_10_02.h"

using namespace std;

int main ()
{
	string strName;		//名前を入力するのに使う
	int nWidth;			//車幅を入力するのに使う
	int nLength;		//車長を入力するのに使う
	int nHeight;		//車高を入力するのに使う
	double dblGas;		//現在のガソリン量を入力するのに使う
	string strNumber;	//車のナンバーを入力するのに使う
	double dblEco;		//燃費を入力するのに使う
	double dblCapa;	//ガソリンの容量を入力するのに使う

	//データの入力を促す
	cout << "車のデータを入力してください。\n";
	//車の名前の入力を促す
	cout << "名前：";
	//キーボードから入力
	cin  >> strName;
	//車幅の入力を促す
	cout << "車幅：";
	//キーボードから入力
	cin  >> nWidth;
	//車長の入力を促す
	cout << "車長：";
	//キーボードから入力
	cin  >> nLength;
	//車高の入力を促す
	cout << "車高：";
	//キーボードから入力
	cin  >> nHeight;
	//現在のガソリン量の入力を促す
	cout << "現在ガソリン量：";
	//キーボードから入力
	cin  >> dblGas;
	//車のナンバーの入力を促す
	cout << "車のナンバー：";
	//キーボードから入力
	cin  >> strNumber;
	//燃費の入力を促す
	cout << "燃費：";
	//キーボードから入力
	cin  >> dblEco;
	//ガソリンの最大容量の入力を促す
	cout << "ガソリンの最大容量：";
	//キーボードから入力
	cin  >> dblCapa;

	//コンストラクタを呼び出してオブジェクトMyCarを定義
	Car MyCar(strName,nWidth,nLength,nHeight,dblGas,strNumber,dblEco,dblCapa);

	//MyCarのスペックを表示
	MyCar.print_spec();

	//breakされるまで続ける
	while(true) {
		//現在の車の位置をメンバ関数x,yを呼び出して表示
		cout << "現在地（" << MyCar.x() << "," << MyCar.y() << ")\n";
		//残りの燃料をメンバ関数fuelを呼び出して表示
		cout << "残り燃料：" << MyCar.fuel() << "\n";


		//給油するかどうか確認するための変数
		int confirm_charge;
		//給油するかどうか入力を促す
		cout<< "給油しますか[0…No,1…Yes]：";
		//キーボードから入力
		cin  >> confirm_charge;
		//給油すると入力されたら
		if(confirm_charge == 1) {
			//メンバ関数fuel_chargeを呼び出して給油
			MyCar.fuel_charge();
		}


		//移動するか確認
		cout << "移動[0…No,1…Yes]：";
		//移動するかどうかを入力するための変数
		int move;
		//キーボードから入力
		cin >> move;
		//続けない時
		if(move == 0) {
			//while文を抜けて終了
			break;
		}

		//x、y方向にいくつ移動したいか入力するための変数
		double dx,dy;
		//x方向にいくつ移動するか入力を促す
		cout << "X方向の移動距離：";
		//キーボードから入力
		cin  >> dx;
		//y方向にいくつ移動するか入力を促す
		cout << "Y方向の移動距離：";
		//キーボードから入力
		cin  >> dy;

		//メンバ関数moveを呼び出してちゃんと移動できなかったとき
		if(!MyCar.move(dx,dy)) {
			//燃料が足りなかったことを表示
			cout << "\a燃料が足りません！\n";
		}
	}

	//main関数の返却値
	return 0;

}
