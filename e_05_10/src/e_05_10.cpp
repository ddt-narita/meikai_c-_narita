/* 演習05－10
 * 4行3列の行列と3行4列の行列の積を求めるプログラムの作成
 * 作成日：5月8日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */
#include<iomanip>
#include<iostream>
using namespace std;
int main ()
{
	const int nRow1 = 4;		//行列Aの行数
	const int nRow2 = 3;		//行列Bの行数
	const int nColumm1 = 3;	//行列Aの列数
	const int nColumm2 = 4;	//行列Bの列数

	int nArray_1[nRow1][nColumm1];			//4行3列の行列A
	int nArray_2[nRow2][nColumm2];			//3行4列の行列B
	int nArray_12Product[nRow1][nColumm2];	//行列Aと行列Bの積の行列C

	//4行3列の行列の各要素に代入
	cout << "4行3列の要素を入力して下さい\n";


	//4行目まで繰り返す
	for(int i = 0; i < nRow1; i++) {
		//3列目まで繰り返す
		for(int j = 0; j < nColumm1; j++) {
			//各要素に代入を促す
			cout << "nArray1[" << i << "][" << j <<"]：";
			//各要素にキーボードから入力
			cin >> nArray_1[i][j];
		}
	}


	//3行4列の行列の要素に入力を促す
	cout << "3行4列の要素を入力して下さい\n";

	//3行目まで繰り返す
	for(int i = 0; i < nRow2; i++) {
		//４列目まで繰り返す
		for(int j = 0; j<nColumm2; j++) {
			//各要素に代入を促す
			cout << "nArray2[" << i << "][" << j <<"]：";
			//キーボードから各要素に代入
			cin >> nArray_2[i][j];
		}
	}

	//行列Aと行列Bの積の4行4列の行列Cを表示することを明示
	cout << "行列nArray1と行列nArray2の積の行列は\n";


	//4行目目まで繰り返す
	for(int i = 0; i < nRow1; i++) {
		//4列目まで繰り返す
		for (int j = 0; j< nColumm2;j++) {
			//積の行列Cは加算を繰り返すので誤差が累積しな異様に各要素をはじめ0で初期化する
			nArray_12Product[i][j]=0;
			//加算はAの列分またはBの行分まで行う
			for(int k = 0; k < nRow2; k++) {
				//行列の積の計算方法にのっとり０～ｋまでの積の和を代入
				nArray_12Product[i][j] += (nArray_1[i][k] * nArray_2[k][j]);
			}
			//積の行列Cの各要素を表示
			cout << setw(5) << nArray_12Product[i][j];
		}
		//行が変わるごとに改行
		cout << "\n";
	}
	//main関数の返却値
	return 0;
}
