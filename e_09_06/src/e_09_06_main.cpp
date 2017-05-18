/* 演習09-06
 * 数当てゲームの変更　メイン部
 * 作成日：5月18日
 * 作成日：成田修之
 */

#include<iostream>
#include"e_09_06.h"

using namespace std;

//最大を999で設定
int max_no = 999;

int main()
{
	//ランダムな値を生成する種を関数を呼び出して設定
	initialize();
	//開始の合図
	cout << "数当てゲーム開始！\n";


	do{
		//入力された回数をかぞえる変数
		int nCount = 0;
		//答えを設定
		gen_no();
		//入力するための変数
		int hantei;

		do{
			/*関数を二つ呼び出して入力を促し範囲内の数が入力されるまで繰り返し
			 *答えの数字と比較し判定する
			 */
			hantei = judge(input());
			//小さいとき
			if(hantei == 1) {
				//そのことを表示
				cout << "\aもっと小さいですよ。\n";
			//大きいとき
			} else if(hantei == 2){
				//そのことを表示
				cout << "\aもっと大きいですよ。\n";
			}
			//何回目かカウントする
			nCount++;
		//正解するか10回目を超えるまで繰り返す
		}while(hantei != 0 && nCount < 10);

		//判定が0で終了した場合
		if(hantei == 0) {
			//何回目で正解かを表示
			cout << nCount <<"回目で正解です\n";
		//それ以外の時
		} else {
			//答えを表示
			cout << "10回ミスをしました。答えは" << kotae << "です。\n";
		}

	//好きなだけ繰り返す
	}while(confirm_retry());

	//main関数の返却値
	return 0;
}
