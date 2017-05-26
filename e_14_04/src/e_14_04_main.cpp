
#include<iostream>
#include"e_14_04.h"
using namespace std;

int main()
{
	int a = 2;	//行列の行数列数について使う変数
	int b = 3; 	//行列の行数列数について使う変数
	int c = 4;	//行列の行数列数について使う変数

	Matrix matA(a,b);	//2行3列の行列A
	Matrix matB(a,b);	//2行3列の行列B

	//2行3列の配列の各要素に入力を促す
	cout << "2行3列の配列の各要素に入力してください\n";
	cin  >> matA;
	//3行2列の配列の各要素に入力を促す
	cout << "3行2列の配列の各要素に入力してください\n";
	cin  >> matB;

	cout << matA;	//入力された行列Aを表示
	cout << matB;	//入力された行列Bを表示

	//入力された2つの行列の和を表示
	cout << "入力された2つの行列の和は\n"<<matA + matB << "\n";
	cout << "2つの行列の差は\n"<<matA - matB << "\n";


	//3行4列の行列C
	Matrix matC(b,c);
	//4行3列の行列D
	Matrix matD(c,b);

	//行列の各要素に入力を促す
	cout << "3列4行の行列Cの各要素に入力してください：";
	cin >> matC;
	//行列の各要素に入力を促す
	cout << "4行3列の行列Dの各要素に入力してください：";
	cin >> matD;

	//入力された2つの行列の積を表示
	cout << "入力された2つの行列の積行列は\n" << matC * matD << "\n";

	//配列Aに配列Dを代入
	matA = matD;

	//コピーした配列Aを表示
	cout << matA;

	return 0;
}
