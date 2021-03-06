/* 演習03-02
 * 2桁のランダムな数当てゲーム
 * 作成日：5月2日
 * 作成者：成田修之
 * 更新日：5月9日
 * 更新者：成田修之
 */

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	//ランダムな数を生成する種（基準）を設定
	srand( time(NULL) );

	//2桁の整数なので0～89の整数をランダムに作った後+10して10～99の整数にする
	int nNumber = rand() % 90 + 10;

	int nInput;		//ランダムな値を予想し入力するための変数

	//数当てゲームをこれから始めることの表示
	cout << "数当てゲーム開始！\n";
	//数当てゲームの説明の表示
	cout << "10～99の2桁の整数を当ててください\n";

	//正解するまで続ける
	do {
		//ランダムな値がいくつなのか入力することを促す表示
		cout 	<< "いくつかな？：";
		//キーボードから入力
		cin 	>> nInput;

		//入力された値が大きいとき
		if(nInput > nNumber) {
			//ランダムな値が入力された値より小さいことを表示
			cout << "もっと小さな数だよ。\n";

		//入力された値が小さいとき
		} else if (nInput < nNumber) {
			//ランダムな値が入力された値より大きいことを表示
			cout << "もっと大きい数だよ。\n";
		}

	//不正解なら繰り返す
	}while (nInput != nNumber);

	//do文を抜けたら正解であると表示
	cout << "正解です！\n";

	//main関数の返却値0
	return 0;
}
