/* 演習06-18
 * 0以上9以下の乱数を返却する関数。複数回呼び出されたとき連続して同じ値を返さないように作成
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

/* 関数rand1
 * 0以上9以下の乱数を返却する。複数回呼び出されたとき連続して同じ値を返さないようにする
 * 引数は無し
 * 返却値は連続で同じ値をとらない0以上9以下の値
 * 作成日：5月12日
 * 作成者：成田修之
 */
int rand1();


int main()
{
	//ランダムな値を生成する種を設定する
	srand(time(NULL));
	//入力に使う変数
	int nInput;

	//いくつ表示するか入力を促す表示
	cout << "連続して同じ値とならないように0から9のランダムな数字を表示します。";
	cout << "いくつ表示しますか：";
	//キーボードから入力
	cin  >> nInput;

	//0から入力された値まで繰り返す
	for(int i = 0; i < nInput; i++) {
		//関数rand1を呼び出して返却値を表示
		cout << rand1();
	}

	//main関数の返却値
	return 0;
}

int rand1()
{
	//静的記憶域期間を持つ変数を宣言
	static int nRandA = -2;
	//ランダムな値を代入するのに使う変数
	int nRandB;

	//一度は本文を実行し条件を満たす限り繰り返す
	do{
		//0から9までのランダム整数を代入
		nRandB = rand() % 10;
	}while(nRandA == nRandB);

	//関数をまたいでも値を補完するnRandAに代入して次の時に今回と同じ値にならないようにする
	nRandA = nRandB;

	//異なるランダムな値を代入する
	return nRandB;
}

