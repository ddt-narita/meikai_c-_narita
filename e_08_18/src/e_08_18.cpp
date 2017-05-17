/* 演習08-18
 * 文字列として表された整数値を、int型の整数値に変換した値を返す関数の作成
 * 作成日：5月17日
 * 作成者：成田修之
 */
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
 */

int str2int(const char* s);


int main()
{
	//文字列を入力するための配列
	char chrStr[100];

	//入力を促す表示
	cout << "文字列を入力してください";
	//キーボードから入力
	cin  >> chrStr;

	//これからやることを表示
	cout << "文字列が数字のみならその数値の2倍を表示します。数字以外があるときは0を表示します。\n";
	//関数str2intを呼び出して文字列の数字の2倍を表示
	cout << 2 * str2int(chrStr);

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


int str2int(const char* s)
{
	int length = strlen(s);	//文字列sの長さを求めて代入
	int nReturn = 0;			//返却に使う変数

	//ナル文字まで繰り返す
	for(int i = 0; s[i]; i++) {
		//数字文字ではない時
		if(isdigit(s[i]) == 0){
			//返却値を0にリセットする
			nReturn = 0;
			//for分を抜けて0を返却
			break;
		//数字文字の時
		} else {
			//その数字文字によって分岐
			switch(s[i]) {
			/*1の時、1×(10のその数字の位置までの長さ乗を関数tenPoewrを呼んで計算)を代入
			 *以下先頭数字を変えて同様*/
			case '1': nReturn += 1 * tenPower(length - i - 1);	break;
			//2の時
			case '2': nReturn += 2 * tenPower(length - i - 1);	break;
			//3の時
			case '3': nReturn += 3 * tenPower(length - i - 1);	break;
			//4の時
			case '4': nReturn += 4 * tenPower(length - i - 1);	break;
			//5の時
			case '5': nReturn += 5 * tenPower(length - i - 1);	break;
			//6の時
			case '6': nReturn += 6 * tenPower(length - i - 1);	break;
			//7の時
			case '7': nReturn += 7 * tenPower(length - i - 1);	break;
			//8の時
			case '8': nReturn += 8 * tenPower(length - i - 1);	break;
			//9の時
			case '9': nReturn += 9 * tenPower(length - i - 1);	break;
			//0の時 次の数字へ
			case '0': break;
			}
		}
	}
	//上で求めた返却値
	return nReturn;
}
