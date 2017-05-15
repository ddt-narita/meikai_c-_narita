/* 演習07-12
 * 要素数nの配列pの全要素にvを代入する関数fillを作成
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数fill
 * 要素数nの配列pの全要素にvを代入する
 * 引数は配列のポインタ型、要素数、代入する値
 * 返却値はなし
 * 作成日：5月15日
 * 作成者：成田修之
 */

void fill (int *p, int n, int v);


int main ()
{
	const int nArrayNumber = 6;	//配列の要素数
	int nArray[nArrayNumber];		//2次元配列
	int nInput;						//配列に代入する値

	//すべての要素に代入する値を入力
	cout << "配列のすべての要素に代入する値を入力して下さい：";
	//キーボードから入力
	cin  >> nInput;

	//全要素を表示することを明示
	cout << "全要素を表示します\n";
	//関数fillを呼び出して全要素に代入
	fill(nArray,nArrayNumber,nInput);

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素を表示
		cout << "nArray[" << i << "]；" << nArray[i] << "\n";
	}
}

void fill (int *p, int n, int v)
{
	//要素数分繰り返す
	while(n-- > 0){
		//各要素にvを代入する
		*p++ = v;
	}
}
