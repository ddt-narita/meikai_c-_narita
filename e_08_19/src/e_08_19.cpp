/* 演習08-19
 * 文字列として表された実数をdoule型の実数に変換した値を返却する関数を作成
 * 作成日：5月17日
 * 作成者：成田修之
 * 更新日：5月23日
 * 更新者：成田修之
 */
#include<iomanip>
#include<cstring>
#include<iostream>
using namespace std;


/* 関数tenPower
 * 10のべき乗を求めるための関数
 * 引数はint型
 * 返却値は求めた10のべき乗
 * 作成日：5月17日
 * 作成者：成田修之
 */
int tenPower(int n);


/* 関数str2int
 * 文字列として表された整数値を、int型の整数値に変換した値を返す関数
 * 引数はchar型へのポインタ
 * 返却値はint型に変換された値か、整数値を読み込めない時は0
 * 作成日：5月17日
 * 作成者：成田修之
 * 更新日：5月23日
 * 更新者：成田修之
 */
double str2double(const char* s);


int main()
{
	char* chrStr = new char[50];	//入力するために確保したメモリを指すポインタを宣言

	//これからやることを表示
	cout << "文字列が実数のみならその数値の2倍を表示します。実数以外があるときは0を表示します。\n";
	//入力を促す表示
	cout << "文字列を入力してください";
	//キーボードから入力
	cin  >> chrStr;

	//関数str2doubleを呼び出して文字列の数字の2倍を表示
	cout << fixed << setprecision(6) << 2 * str2double(chrStr);

	delete[] chrStr;

	//main関数の返却値
	return 0;
}

int tenPower(int n)
{
	//返却に使う変数、掛け算をするので1で初期化
	int nTenPower = 1;
	//引数分繰り返す
	for(int i = 0; i < n; i++) {
		//10かけたものを代入する
		nTenPower *= 10;
	}
	//べき乗できたものを返却する
	return nTenPower;
}


double str2double(const char* s)
{
	int length = strlen(s);	//文字列sの長さを求めて代入
	double dblReturn = 0;		//返却に使う変数
	int nPoint = 0;				//小数点の位置を記憶しておくための変数


	//ナル文字まで繰り返す
	for(int i = 0; s[i]; i++) {
		//マイナス以外で数字文字ではない時
		if(isdigit(s[i]) == 0 && s[i] != '-') {
			//小数点の時
			if(s[i] == '.') {
				//小数点の分で10割る
				dblReturn /= 10;
				//小数点の位置を記憶させる
				nPoint = length - i - 1;
			//小数点以外の時
			} else {
				//返却値を0にリセットする
				dblReturn = 0;
				//for分を抜けて0を返却
				break;
			}

		//数字文字の時
		} else {
			//その数字文字によって分岐
			switch(s[i]) {
			/*1の時、1×(10のその数字の位置までの長さ乗を関数tenPoewrを呼んで計算)を代入
			 *以下先頭数字を変えて同様*/
			case '1': dblReturn += 1 * tenPower(length - i - 1);	break;
			//2の時
			case '2': dblReturn += 2 * tenPower(length - i - 1);	break;
			//3の時
			case '3': dblReturn += 3 * tenPower(length - i - 1);	break;
			//4の時
			case '4': dblReturn += 4 * tenPower(length - i - 1);	break;
			//5の時
			case '5': dblReturn += 5 * tenPower(length - i - 1);	break;
			//6の時
			case '6': dblReturn += 6 * tenPower(length - i - 1);	break;
			//7の時
			case '7': dblReturn += 7 * tenPower(length - i - 1);	break;
			//8の時
			case '8': dblReturn += 8 * tenPower(length - i - 1);	break;
			//9の時
			case '9': dblReturn += 9 * tenPower(length - i - 1);	break;
			//0の時 次の数字へ
			case '0': break;
			}
		}
	}
	//文字列の先頭がマイナスの時
	if(s[0] == '-'){
		//-に変換して-も長さ1を使っているのでその分の10で割る
		dblReturn /= -1;


	}
	//記憶させておいた小数点位置分の10のべき乗で割って代入
	dblReturn /= tenPower(nPoint);

	//上で求めた返却値
	return dblReturn;
}
