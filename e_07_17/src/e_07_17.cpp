/* 演習07-17
 * ポインタpがさすオブジェクトの先頭nバイトにvを代入する関数の作成
 * 作成日：5月16日
 * 作成者：成田修之
 */
#include<iostream>
using namespace std;

/* 関数mem_set
 * ポインタpがさすオブジェクトの先頭nバイトにvを代入する
 * 引数はvoidへのポインタ型、int型1つ、先頭バイト、代入するv
 * 返却値は無し
 * 作成日：5月16日
 * 作成者：成田修之
 */
void mem_set(void* p, const int n, unsigned char v) {
	//short型配列を指す空ポインタをcharポインタ型にキャストしたもの
	unsigned char* tmp = reinterpret_cast<unsigned char*>(p);
	//要素数分繰り返す
	for (int i = 0; i < n; i++) {
		//代入して次の要素へ
		*tmp++ = v;
	}
}

int main ()
{
	//配列の要素数
	const int nArrayNumber = 8;
	//要素数nArrayNumberの配列,0で初期化
	short nArray[nArrayNumber] = {0};

	//配列の先頭要素のアドレスで初期化された空ポイント型変数
	void* ptr = nArray;
	//何バイトに代入するか入力してもらう変数
	int nInput = 5;
	//何を代入するのか入力するための変数
	unsigned char charInput = 1;

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素を表示
		cout << nArray[i] << "\n";
	}


	//関数mem_setを呼び出してshort型配列がどうなっているのか確認する
	mem_set(ptr,nInput,charInput);

	cout << "代入後の配列の各要素を表示します\n";

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素を表示
		cout << nArray[i] << "\n";
	}
}
