/* 演習06-10
 * 正の整数値を読み込んでその値を返却する、0や負の値が入力されたときは
 * もう一度入力させる関数
 * 作成日：5月11日
 * 作成者：成田修之
 */
#include<iostream>
using namespace std;

/* 関数read_pint
 * 正の整数値を読み込んでその値を返却する、0や負の値が入力されたときは
 * もう一度入力させる関数
 * 引数なし
 * 返却値0や負でない入力された値
 * 作成日：5月11日
 * 作成者：成田修之
 */
int read_pint();

int main()
{
	//何個表示するか入力を促す表示
	cout << "何個＊を表示しますか\n";

	//関数read_pintを呼び出し代入
	int nInput =read_pint();

	//入力された値まで繰り返す
	for(int i =0; i < nInput; i++) {
		//アスタリスクを表示
		cout << "*";
	}
	//main関数の返却値
	return 0;
}

int read_pint()
{
	int nInput;		//入力するための変数
	//入力された値が0以下である限り続ける
	for(;nInput <= 0;){
		//正の整数値の入力を促す
		cout 	<< "正の整数値：";
		//キーボードから入力
		cin 	>> nInput;
	}
	//関数read_pintの返却値
	return nInput;
}
