/* 演習06-09
 * a以上b未満の乱数を生成しその値を返却する関数randomを作成
 * ただしbがa未満の時はaをそのまま返す
 * 作成日：5月11日
 * 作成者：成田修之
 */
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

/* 関数random
 * a以上b未満のランダムな値を返却、bがa未満の時はaを返却する関数
 * 引数は2つのint型の整数
 * 返却値はa以上b未満のランダムな値か、a
 * 作成日：5月11日
 * 作成者：成田修之
 */
int random(int nInputA,int nInputB);

int main ()
{
	int nInputA;	//入力するための変数A
	int nInputB;	//入力するための変数B

	//ランダムな整数を生成することを明示
	cout 	<< "整数A以上整数B未満のランダムな整数を表示します。(整数Bが整数A未満な時は";
	cout 	<< "整数Aを表示します。)\n";
	//整数Aに入力を促す表示
	cout 	<< "整数A：";
	//キーボードから入力
	cin 	>> nInputA;
	//整数Bに入力を促す表示
	cout 	<< "整数B：";
	//キーボードから入力
	cin 	>> nInputB;
	//random関数を呼び出して生成した整数を表示
	cout 	<< random(nInputA,nInputB) << "です。";

	//main関数の返却値
	return 0;
}

int random(int nInputA,int nInputB)
{
	//返却値となる変数を宣言
	int nReturn;
	//ランダムな値を生成する種を設定
	srand (time(NULL));
	//入力されたAの値がB以上のとき
	if(nInputA >= nInputB) {
		//返却値にAを代入する
		nReturn = nInputA;
	//Bのほうが大きいとき
	} else {
		/*0から大きいBから小さいAの値を引いた数までのランダムな整数を生成しAに
		 * 足したものを返却値に代入する
		 */
		nReturn = rand() % (nInputB - nInputA) + nInputA;
	}
	//関数randomの返却値
	return nReturn;
}

