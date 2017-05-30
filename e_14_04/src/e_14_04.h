/* 演習14-04 ヘッダ部
 * 行列クラスMatrixを教科書のコードを参考に作成
 * 作成日：5月25日
 * 作成者：成田修之
 */

//インクルードガード
#ifndef ___Class_Matrix
#define ___Class_Matrix

class Matrix
{
	int height; 	//行列オブジェクトの行数
	int width;		//行列オブジェクトの列数
	double** ptr;	//行列オブジェクトの先頭要素へのポインタ

public:

	//コンストラクタ
	Matrix(int a, int b = 1);
	//コピーコンストラクタ
	Matrix(const Matrix&);
	//デストラクタ
	~Matrix() {
		//各行に確保した列数分の領域を解放
		for(int i = 0; i < height; i++) {
			delete[] ptr[i];
		}
		//各行のための領域を解放
		delete[]ptr;
	}

	//行数を返却する関数
	int Height () const{
		return height;
	}

	//列数を返却する関数
	int Width()const{
		return width;
	}

	//加法演算子関数の宣言
	Matrix operator+(const Matrix& a);
	//現法演算子関数の宣言
	Matrix operator-(const Matrix& a);
	//積の演算子関数の宣言
	Matrix operator*(const Matrix& a);
	//代入演算子関数の宣言
	Matrix& operator=(Matrix& a);

	Ma

	//挿入子の多重定義の宣言
	friend std::ostream& operator<<(std::ostream& s, const Matrix& x);
	//抽出子の多重定義の宣言
	friend std::istream& operator>>(std::istream& s, Matrix& x);

};

//インクルードガードの終わり
#endif
