/* 演習07-05
 * list7-10の関数reverseでの2要素の交換を演習07-02で作成した関数swapによって行うように書き換え
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数swap
 * 2つの値を入れ替える関数
 * 引数はint型の2つの整数
 * 返却値は無し
 * 作成日：5月15日
 * 作成者：成田修之
 */
void swap(int* x,int* y);


/* 関数reverse
 * 配列の要素を反転させる
 * 引数は配列のポイント型とint型の変数
 * 返却値話
 * 作成日：5月15日
 * 作成者：成田修之
 */
void reverse(int a[],int n);


int main()
{
	//配列の要素数
	const int n = 5;
	//要素数ｎの配列
	int c[n];

	//n回繰り返す
	for(int i = 0; i < n; i++) {
		//入力を促す表示
		cout << "c[" << i << "]：";
		//キーボードから入力
		cin  >> c[i];
	}
	//関数reverseを呼び出し反転させる
	reverse(c,n);

	//反転させたことを明示
	cout << "要素の並びを反転しました。\n";
	//n回繰り返す
	for (int i = 0; i < n; i++) {
		//各要素を表示
		cout << "c[" << i << "] =" << c[i] << "\n";
	}
	//main関数の返却値
	return 0;
}

void swap(int* x,int* y)
{
	//避難させるための変数
	int nTrade = *x;
	//xにyの値を代入し
	*x = *y;
	//yに避難していたxの値を代入
	*y = nTrade;

}

void reverse(int a[],int n)
{
	//反転なので要素数の半分繰り返す
	for(int i = 0; i < n / 2; i++) {
		//関数を呼び出しi番目と反対側を入れ替える
		swap(&a[i], &a[n - i - 1]);
	}
}


