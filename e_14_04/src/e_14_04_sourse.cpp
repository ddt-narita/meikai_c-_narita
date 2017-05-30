/* 演習14-04 ソース部
 * 行列クラスMatrixを教科書のコードを参考に作成
 * 作成日：5月25日
 * 作成者：成田修之
 */

#include<iostream>
#include<sstream>
#include<new>
#include<iomanip>
#include"e_14_04.h"

using namespace std;

//コンストラクタ
Matrix::Matrix(int a, int b):height(a),width(b)
{
	//doubleへのポインタ型の領域を行数分確保
	ptr = new double*[height];

	//行列数分繰り返す
	for(int i = 0; i < height; i++) {
		//それぞれの行に列数分の領域を確保
		ptr[i] = new double[width];
	}

	//行数分繰り返す
	for(int i = 0; i < height; i++) {
		//列数分繰り返して各要素を1で初期化
		for(int j = 0; j < width; j++) {
			ptr[i][j] = 1;
		}
	}
}

//コピーコンストラクタ
Matrix::Matrix(const Matrix& mat)
{

	height = mat.height;	//行数をコピー
	width = mat.width;		//列数をコピー

	delete[]this;

	//行数分領域を確保
	ptr = new double*[height];
	//行数分繰り返す
	for(int i = 0; i < height; i++) {
		//各行列に列数分領域を確保
		ptr[i] = new double[width];
	}
	//行数分繰り返す
	for(int i = 0; i < height; i++) {
		//列数分繰り返して各要素をコピー
		for(int j = 0; j < width; j++) {
			ptr[i][j] = mat.ptr[i][j];
		}
	}
}

//加算演算子の多重定義
Matrix Matrix::operator+(const Matrix& a)
{
	//自身と同じ行数列数のオブジェクトを作成
	Matrix mat(height,width);

	//行数分繰り返す
	for(int i = 0; i < height; i++) {
		//列数分繰り返して自身と右オペランドの各要素を足して代入
		for(int j = 0; j < width; j++) {
			mat.ptr[i][j] = ptr[i][j] + a.ptr[i][j];
		}
	}
	//各要素足した配列オブジェクトを返却
	return mat;
}

//減算演算子の多重定義
Matrix Matrix::operator-(const Matrix& a) {
	//自身と同じ行数列数のオブジェクトを作成
	Matrix mat(height,width);

	//行数分繰り返す
	for(int i = 0; i < height; i++) {
		//列数分繰り返して各要素を引いたものを代入
		for(int j = 0; j< width; j++) {
			mat.ptr[i][j] = ptr[i][j] - a.ptr[i][j];
		}
	}
	//各要素を引いたオブジェクトを返却
	return mat;
}

//積の演算子の多重定義
Matrix Matrix::operator *(const Matrix& a)
{
	//積を求めて返すための行列、左オペランドの行数、右オペランドの列数の行列
	Matrix mat(height,a.width);

	//行数分繰り返す
	for(int i = 0; i < height; i++){
		//列数分繰り返す
		for(int j = 0; j < a.width; j++) {
			//積の行列の各要素を最初に0にリセット
			mat.ptr[i][j] = 0;
			//左オペランドの列数右オペランドの行数と同じだけ繰り返す
			for(int k = 0; k < width; k++) {
				//行列の積の計算方法にのっとって各要素に加算
				mat.ptr[i][j] += ptr[i][k] * a.ptr[k][j];
			}
		}
	}
	//積行列を返却
	return mat;
}

//代入演算子の多重定義
Matrix& Matrix::operator =( Matrix& x){

	//要素の数が違うとき
	if(height != x.height || width != x.width) {
		//各行に確保してた領域を解放
		for(int i = 0; i < height; i++) {
			delete []ptr[i];
		}
		//行のために確保してた領域を解放
		delete[]ptr;

		//代入する行列の行数列数を代入
		height = x.height;
		width = x.width;

		//行数分の領域を確保
		ptr = new double*[height];

		//行数分繰り返し各行に列数分の領域を確保
		for(int i = 0; i < height; i++) {
			ptr[i] = new double[width];
		}
	}
	//行数分繰り返す
	for(int i = 0; i < height; i++) {
		//列数分繰り返して各要素を代入
		for(int j = 0; j < width; j++){
			ptr[i][j] = x.ptr[i][j];
		}
	}

	//自分自身の参照を返却
	return *this;
}

//挿入子の多重定義
std::ostream& operator<<(std::ostream& s, const Matrix& x){
	//行数分繰り返す
	for(int i = 0; i < x.height; i++) {
		//列数分繰り返す
		for(int j = 0; j < x.width; j++) {
			//最低5文字文を使って各要素を表示
			s << setw(5) << x.ptr[i][j];
		}
		//行毎に改行
		s << "\n";
	}
	//各要素を乗せた出力ストリームを返却
	return s;
}

//抽出子の多重定義
std::istream& operator>>(std::istream& s, Matrix& x){
	//行数分繰り返す
	for(int i = 0; i < x.height; i++) {
		//列数分繰り返す
		for(int j = 0; j < x.width; j++) {
			//入力する要素を表示
			std::cout << "配列[" << i << "][" << j << "]：";
			//キーボードから各要素に入力
			s >> x.ptr[i][j];
		}
	}
	//各要素を乗せた入力ストリームを返却
	return s;
}
