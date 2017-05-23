/* 演習08-07
 * 文字列sに含まれる数字文字の個数をカウントして各数字文字の個数をc[0],c[1],…に
 * 格納する関数の作成
 * 作成日：5月16日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数count_digits
 * 文字列sに含まれる数字文字の個数をカウントして各数字文字の個数をc[0],c[1],…に
 * 格納する関数
 * 引数はcharへのポイント型、int型の配列
 * 返却値は無し
 * 作成日：5月16日
 * 作成者：成田修之
 */

void count_digits(const char* chrStr,int c[])
{
	//ナル文字が出るまで繰り返す
	for(int i = 0; chrStr[i]; i++) {
		//文字の種類によって分ける
		switch(chrStr[i]) {
		//0の時
		case '0' : c[0]++;		break;
		//1の時
		case '1' : c[1]++;		break;
		//2の時
		case '2' : c[2]++;		break;
		//3の時
		case '3' : c[3]++;		break;
		//4の時
		case '4' : c[4]++;		break;
		//5の時
		case '5' : c[5]++;		break;
		//6の時
		case '6' : c[6]++;		break;
		//7の時
		case '7' : c[7]++;		break;
		//8の時
		case '8' : c[8]++;		break;
		//9の時
		case '9' : c[9]++;		break;
		default : break;
		}
	}
}


int main()
{
	const int Deta = 100;
	//文字列の配列
	char* chrStr = new char[Deta];
	//各数字の個数を代入するための配列
	int nArray[10] = {0};

	//文字列の入力を促す
	cout << "文字列を入力してください";
	//キーボードから入力
	cin  >> chrStr;

	cout << "入力された文字列に含まれる各数字文字の個数を表示します。\n";

	//関数count_digitsを呼び出し入力された文字列中の各数字文字の個数を表示する
	count_digits(chrStr,nArray);

	//0から9の10回繰り返す
	for(int i =0; i < 10; i++) {
		//各数字の個数を表示する
		cout << "数字" << i << "は" << nArray[i] << "個です。\n";
	}

	delete [] chrStr;

	//main関数の返却値
	return 0;

}
