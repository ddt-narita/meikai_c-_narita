/* 演習07-14
 * 要素数nの配列a内のkeyと等しい全要素の添え字を配列idxに格納する関数の作成
 * 作成日：5月15日
 * 作成者：成田修之
 */
#include<iostream>
using namespace std;

/* 関数search_idx
 * 要素数nの配列a内のkeyと等しい全要素の添え字を配列idxに格納する関数
 * 引数は配列の2つのポイント型、要素数、探す値
 * 返却値はkeyと等しい要素の個数
 * 作成日：5月15日
 * 作成者：成田修之
 */

int search_idx(int* a, int *b, int n, int key);


int main()
{
	//配列の要素数
	int nArrayNumber = 8;
	//要素数nArrayNumberの配列
	int nArrayA[nArrayNumber];
	//keyと同値の配列Aの要素の番号を格納する配列
	int nArrayB[nArrayNumber];
	//探す値を入力するための変数
	int nKeyNumber;

	//各要素に入力をするように表示
	cout << "配列Aの各要素に値を入力して下さい\n";
	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//どの要素に入力するのか表示
		cout << "nArrayA[" << i << "]：";
		//キーボードから入力
		cin  >> nArrayA[i];
	}
	//何個あるかと何番目にあるか表示することを明示
	cout << "配列Aから任意の値を探し同じ要素の個数と配列の何番目にあるかを表示します\n";
	//いくつの値を探すか入力を促す表示
	cout << "いくつの値を探しますか：";
	//キーボードから入力
	cin  >> nKeyNumber;

	//関数search_idxから返却された同じ要素の個数を代入
	int nKeyCount = search_idx(nArrayA,nArrayB,nArrayNumber,nKeyNumber);

	//何個あるか表示する
	cout << "同じ値の個数は" << nKeyCount << "個です。\n";

	//同じ要素が何番目にあるかを表示
	cout << "同じ配列の要素は";

	//同じ要素の個数分だけ繰り返す
	for(int i = 0; i < nKeyCount; i++) {
		//何番目にあるか表示
		cout << "nArrayB[" << nArrayB[i] << "],";
	}
	cout << "です。\n";

	//main関数の返却値
	return 0;
}


int search_idx(int* a, int *b, int n, int key)
{
	//配列の先頭要素のポイントを表すポイント型
	int *ptr = a;
	//返却するkeyと同値の要素の個数
	int nKeyCount = 0;
	//要素数分繰り返す
	for(int i = 0; i < n; i++, ptr++) {
		//要素がkeyと同値の時
		if(*ptr == key){
			//配列bにその要素の番号を格納
			b[nKeyCount] = i;
			//同値の個数を数える
			nKeyCount++;
		}
	}
	//等しい要素の個数を返却
	return nKeyCount;
}
