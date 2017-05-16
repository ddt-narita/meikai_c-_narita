/* 演習06-11
 * list6-11を拡張して計算方法もランダムに出題されるように書き換える
 * 作成日：5月11日
 * 作成者：成田修之
 */

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

/* 関数comfirm_retry
 * 続行するかの確認
 * 引数は無し
 * 返却値はbool型にキャストした値
 * 作成日：5月11日
 * 作成者：成田修之
 */
bool confirm_retry();


int main ()
{
	//ランダムな値を生成する種を設定
	srand(time(NULL));
	//トレーニングの開始を表示
	cout << "暗算トレーニング開始";

	//関数confirm_retryを呼び出し真である限り続ける
	do {
		int CalcX 			= rand() % 900 + 100;	//3桁のランダムな値X
		int CalcY 			= rand() % 900 + 100;	//3桁のランダムな値Y
		int CalcZ 			= rand() % 900 + 100;	//3桁のランダムな値Z
		int nInput 			= 0;					//入力するための整数
		int nCalcPattern 	= rand() % 4;			//0から3の整数

		//0から3の生成したランダムな値によって条件分岐
		switch(nCalcPattern) {
		//0の時		正解するまで続ける
		case 0: for(;nInput != CalcX + CalcY + CalcZ;) {
					//計算方法を表示
					cout << CalcX << " + " << CalcY << " + " << CalcZ <<" = ";
					//キーボードから入力
					cin >> nInput;
					//入力した値が違っているとき
					if(nInput != CalcX + CalcY + CalcZ) {
						//違っていることを表示
						cout << "違いますよ。\n";
					}
				}break;

		//1の時		正解するまで続ける
		case 1:for(;nInput != CalcX + CalcY - CalcZ;) {
					//計算方法を表示
					cout << CalcX << " + " << CalcY << " - " << CalcZ <<" = ";
					//キーボードから入力
					cin >> nInput;
					//不正解の時
					if(nInput != CalcX + CalcY - CalcZ) {
						//違うことを表示
						cout << "違いますよ。\n";
					}
				}break;

		//2の時		正解するまで続ける
		case 2:for(;nInput != CalcX - CalcY + CalcZ;) {
					//計算方法を表示
					cout << CalcX << " - " << CalcY << " + " << CalcZ <<" = ";
					//キーボードから入力
					cin >> nInput;
					//不正解の時
					if(nInput != CalcX - CalcY + CalcZ) {
						//違うことを表示
						cout << "違いますよ。\n";
					}
				} break;

		//3の時		正解するまで続ける
		case 3:for(;nInput != CalcX - CalcY - CalcZ;) {
					//計算方法を表示
					cout << CalcX << " - " << CalcY << " - " << CalcZ <<" = ";
					//キーボードから入力
					cin >> nInput;
					//不正解の時
					if(nInput != CalcX - CalcY - CalcZ) {
						//違うことを表示
						cout << "違いますよ。\n";
					}
				}break;

		}
	//関数confirm_retryを呼び出し真のときは繰り返す
	}while(confirm_retry());

	//main関数の返却値
	return 0;
}


bool confirm_retry()
{
	//for文に入るために0と1以外の数で初期化
	int nRetry = -1;
	//0か1以外が入力される限り続ける
	for(;nRetry != 0 && nRetry !=1;) {
		//続けるかどうか入力を促す表示
		cout << "もう一度？<Yes…1,No…0>：";
		//キーボードから入力
		cin >> nRetry;
	}
	//関数comfirm_retryの返却値
	return static_cast<bool>(nRetry);
}
