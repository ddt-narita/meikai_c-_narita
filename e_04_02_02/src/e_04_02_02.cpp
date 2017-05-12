/* 演習 04-02-02
 * unsigned型の全数値を8進数、10進数、16進数で表示
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */
//型の最小値最大値を含んだヘッダ
#include<climits>
//操作子を使うためのヘッダ
#include<iomanip>
#include<iostream>
//基からのUINT_MAXでは大きすぎるので自分で再度設定
#define UINT_MAX 510
using namespace std;

int main()
{
	//unsigned型は最小値が0なので0から始める
	for(int i = 0; ;i++) {
		//8進数
		cout << oct << i << ' ';
		//10進数
		cout << dec << i << ' ';
		//16進数
		cout << hex << i << ' ';

		//unsign型の最大値と等しくなったら終了
		if(i == UINT_MAX) {
			break;
		}
	//10進数で1進むごとに改行する
	cout << '\n';
	}

	//main型の返却値
	return 0;
}
