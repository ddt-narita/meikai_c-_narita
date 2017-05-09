//演習05－10
//4行3列の行列と3行4列の行列の積を求めるプログラムの作成
//
//5月8日
//成田修之
#include<iostream>
using namespace std;
int main ()
{
	const int nRow1 = 4;
	const int nRow2 = 3;
	const int nColumm1 = 3;
	const int nColumm2 = 4;

	int nArray_1[nRow1][nColumm1];
	int nArray_2[nRow2][nColumm2];
	int nArray_12Product[nRow1][nColumm2];

	cout << "4行3列の要素を入力して下さい\n";
	for(int i = 0; i < nRow1; i++) {
		for(int j = 0; j < nColumm1; j++) {
			cout << "nArray1[" << i << "][" << j <<"]：";
			cin >> nArray_1[i][j];
		}
	}

	cout << "3行4列の要素を入力して下さい\n";
	for(int i = 0; i < nRow2; i++) {
		for(int j = 0; j<nColumm2; j++) {
			cout << "nArray2[" << i << "][" << j <<"]：";
			cin >> nArray_2[i][j];
		}
	}

	cout << "行列nArray1と行列nArray2の積は\n1";


	for(int i = 0; i < nRow1; i++) {
		for (int j = 0; j< nColumm2;j++) {
			nArray_12Product[i][j]=0;
			for(int k = 0; k < nRow2; k++) {
				nArray_12Product[i][j] += (nArray_1[i][k] * nArray_2[k][j]);
			}
			cout << "nArray_12Product["<< i << "][" << j << "] =" << nArray_12Product[i][j] << "\n";
		}
	}




}
