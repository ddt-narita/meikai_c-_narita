/* 演習 03-16
 * 1から入力した値までの整数値を2乗して表示する
 * 作成日：5月3日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	int nInputN;	//入力した値を読み込むのに使う変数
	int i;			//カウントするのに使う変数

	//1からnまでなのでnが1以上になるまで繰り返す
	do{
		//入力を促す表示
		cout 	<< "nの値：";
		//キーボードから入力
		cin 	>> nInputN;
	//入力された値が1以上でないければ繰り返す
	} while(nInputN < 1);

	//1から入力された値まで繰り返す
	for(i = 1; i <= nInputN; i++) {
		//iとiの2乗を表示する
		cout << i << "の2乗は" << i * i << '\n';
	}

	//main関数の返却値0
	return 0;
}
