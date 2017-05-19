/* 演習10-02
 * 自動車クラスCarにデータメンバやメンバ関数を自由に追加する
 * 作成日：5月19日
 * 作成者：成田修之
 */

#include<iostream>
#include<string>
#include<cmath>

class Car{
	std::string name;			//名前の入力に使う
	int width;					//車幅の入力に使う
	int length;					//車長の入力に使う
	int height;					//車高の入力に使う
	double xp;					//現在位置のx座標
	double yp;					//現在位置のy座標
	double fuel_level;			//残り燃料の入力に使う
	std::string Number;			//ナンバーの入力に使う
	double fuel_economy;		//燃費の入力に使う
	double fuel_capacity;		//容量の入力に使う

public:
	//コンストラクタ
	Car(std::string n, int w, int l, int h, double f,std::string no, double eco,double f_capa) {
		name = n;
		width = w;
		length = l;
		height = h;
		fuel_level = f;
		xp = yp = 0.0;
		fuel_economy = eco;
		fuel_capacity = f_capa;
	}

	double x()
	{
		//現在位置のx座標を返す
		return xp;
	}

	double y()
	{
		//現在位置のY座標を返す
		return yp;
	}

	double fuel()
	{
		//残り燃料を返す
		return fuel_level;
	}

	void print_spec()
	{
		//名前を表示
		std::cout << "名前" << name 			<<"\n";
		//車幅を表示
		std::cout << "車幅" << width 			<<"\n";
		//車長を表示
		std::cout << "車長" << length 			<<"\n";
		//車高を表示
		std::cout << "車高" << height 			<<"\n";
		//燃費を表示
		std::cout << "燃費" << fuel_economy 	<< "\n";
	}


	bool move(double dx,double dy)
	{
		//返却するのに使う変数
		int nReturn =0;
		//進んだ距離を求める
		double dist = sqrt(dx * dx + dy * dy);

		//消費した燃料が残量より多いとき
		if(dist / fuel_economy > fuel_level) {
			//返却値に0を代入
			nReturn = 0;
		//消費した燃料が残量より少ないとき
		} else {
			//減算量からつかった分だけ減らす
			fuel_level -= dist / fuel_economy;
			//x方向に移動
			xp += dx;
			//y方向に移動
			yp += dy;
			//返却値に1を代入
			nReturn = 1;
		}
		//bool型にキャストして返却
		return static_cast<bool>(nReturn);

	}

	//給油するメンバ関数
	void fuel_charge()
	{
		//何リットル給油するか入力するための変数
		double dblCharge;
		//何リットル給油するか入力を促す
		std::cout << "何リットル給油しますか：";
		//キーボードから入力
		std::cin  >> dblCharge;
		//残量と足して容量を越してしまったとき
		if(dblCharge + fuel_level > fuel_capacity) {
			//給油は行わず出来なかったことを表示
			std::cout << "給油できませんでした";
		//残量と足しても容量以下だった時
		} else {
			//給油したことを表示
			std::cout << "給油しました";
			//残量に給油したい量を足す
			fuel_level += dblCharge;
		}
	}
};
