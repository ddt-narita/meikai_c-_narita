/* 演習07-08
 * 要素数nの配列aから要素a[idx]を先頭とするk個の要素を削除する関数arynrmv
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数arynrmv
 * 要素数nの配列aから要素a[idx]を先頭とするk個の要素を削除する関数arynrmv
 * 引数配列のポインタ型、要素数、先頭となる要素、何個削除するか
 * 返却値は無し
 * 作成日：5月15日
 * 作成者：成田修之
 */

void arynrmv(int a[],int n,int idx,int k)
{
	//最後に削除する要素の次の要素から最後まで繰り返す
	for(int i = 0; i < n - idx - k + 1 ; i++) {
		//削除する先頭の要素に最後に削除する要素の次の値を代入
		a[idx - 1 + i] = a[idx - 1 + k +i];
	}

}

int main()
{
	//配列の要素数
	int nArrayNumber = 10;
	//要素数nArrayNumberの配列
	int nArray[nArrayNumber];
	//削除する要素の番号
	int nArrayIdx;
	//削除する個数
	int nDelete;

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素に入力を促す
		cout << "nArray[" << i << "] ：";
		//キーボードから入力
		cin  >> nArray[i];
	}

	//何番目を削除するか入力を促す
	cout << "要素の何番目から何個かを削除します。何番目？：";
	//キーボードから入力
	cin  >> nArrayIdx;
	//何個削除するか入力を促す
	cout << "何個？：";
	//キーボードから入力
	cin  >> nDelete;

	//関数arymvを呼び出して削除した後の配列を生成
	arynrmv(nArray, nArrayNumber, nArrayIdx,nDelete);

	//削除後の配列を表示
	cout << "削除後の配列を表示します\n";
	//要素数分繰り返す
	for(int i = 0 ; i < nArrayNumber; i++) {
		//各要素を表示
		cout << "nArray[" << i << "] =" << nArray[i] << "\n";
	}

	//main関数の返却値
	return 0;
}
