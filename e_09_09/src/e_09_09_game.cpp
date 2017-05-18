/* 演習09-09
 * 演習09－06中の内部結合をもつ識別子を名前なし名前空間に属するように変更したプログラムの作成
 * 作成日：5月18日
 * 作成者：成田修之
 */


#include<ctime>
#include<cstdlib>
#include "e_09_09.h"

using namespace std;

//他でも使うので定義として設定
int kotae = 0;

void initialize()
{
	//ランダムな値を生成する種を設定
	srand(time(NULL));
}

void gen_no()
{
	//答えを設定
	kotae = rand() %(max_no + 1);
}

int judge(int cand)
{
	//正解の時
	if(cand == kotae) {
		return 0;
	//大きいとき
	} else if(cand > kotae) {
		return 1;
	//小さいとき
	} else {
		return 2;
	}
}
