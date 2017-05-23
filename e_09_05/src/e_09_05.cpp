/* 演習09-05
 * 配列の全要素の最小値を求める関数テンプレートを作成
 * 作成日：5月18日
 * 作成者：成田修之
 */

#include<cstring>
#include<iostream>
using namespace std;

/* 関数minof
 * 配列の全要素の最小値を求める関数テンプレート、文字列にも対応できるように
 * const char型に明示的に特殊化したものを合わせて作成
 * 引数は各型の配列と要素数
 * 返却値は最小値
 * 作成日：5月18日
 * 作成者：成田修之
 */

template <class Type> Type minof(const Type a[],int n)
{
	//配列の最小値をとりあえず最初の要素で初期化
	Type nMin =a[0];
	//a[1]から要素数分繰り返す
	for(int i =1; i < n; i++) {
		//最小値より小さければ
		if(nMin > a[i]){
			//その要素の値を代入
			nMin = a[i];
		}
	}
	//最小値を返却
	return nMin;
}

template <> const char* minof<const char*>(const char* const a[],int n)
{
	//最小の文字列を比較するためにとりあえず先頭の要素になるように初期化
	int nMin = 0;

	//文字列数分繰り返す
	for(int i = 1; i < n; i++) {
		//関数strcmpを用いて比較しminの時の文字列のほうが大きいとき
		if(strcmp(a[nMin],a[i]) > 0) {
			//最小の文字列の添字をiに更新
			nMin = i;
		}
	}
	//最小の文字列を返却する
	return a[nMin];
}

int main()
{
	const int nArrayNumber = 5;			//要素数
	int nArray[nArrayNumber];				//int型の配列
	double dblArray[nArrayNumber];		//double型の配列
	char chrArray[nArrayNumber][100];	//char型の文字列の配列


	//intについて
	//各要素に入力するように明示
	cout << "int型の配列の各要素に入力してください\n";
	//要素分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素に入力を促す
		cout << "nArray[" << i << "] ：";
		//キーボードから入力
		cin  >> nArray[i];
	}
	//関数minofを呼びだし入力された最小の要素を表示
	cout << "最小の要素は" << minof(nArray,nArrayNumber) << "です。\n";

	//doubleについて
	//各要素に入力するように明示
	cout << "double型の配列の各要素に入力してください\n";
	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素に入力を促す
		cout << "dblArray[" << i << "] ：";
		//キーボードから入力
		cin  >> dblArray[i];
	}
	//関数minofを呼びだし入力された最小の要素を表示
	cout << "最小の要素は" << minof(dblArray,nArrayNumber) << "です。\n";


	//char型について
	cout << "各要素に文字列を入力してください\n";
	for(int i = 0; i < nArrayNumber; i++) {
			//各要素に入力を促す
			cout << "文字列を入力chrArray[" << i << "] ：";
			//キーボードから入力
			cin  >> chrArray[i];
		}
	//関数minofを呼ぶためのポインタによる文字列の配列
	const char* chrPoint[nArrayNumber];
	//要素数分繰り返す
	for(int i = 0; i< nArrayNumber; i++) {
		//各要素の文字列を代入
		chrPoint[i] = chrArray[i];
	}


	//関数minofを呼びだし入力された最小の要素を表示
	cout << "最小の文字列は\"" << minof<const char*>(chrPoint,nArrayNumber) << "\"です\n";

	//main関数の返却値
	return 0;
}
