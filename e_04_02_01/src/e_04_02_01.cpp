/* 演習 04-02-01
 * int型の全数値を8進数、10進数、16進数で表示
 * 作成日：5月4日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

//型のMIN、MAXが含まれるヘッダ
#include<climits>
#include<iostream>
//<climits>に入っているINT_MINではマイナスに大きすぎて確認できないため再度定義
#define INT_MIN -255
//<climits>に入っているINT_MAXでは大きすぎて確認できないため再度定義
#define INT_MAX 255
using namespace std;

int main()
{
	//intの最小値から繰り返す
	for(int i = INT_MIN; ; i++) {

		//8進数で表示
		cout << oct << i << ' ';
		//10進数で表示
		cout << dec << i << ' ';
		//16進数で表示
		cout << hex << i <<'\n';
		//最大値になったら終了
		if(i == INT_MAX) {
			break;
		}
	}
	//main関数の返却値０
	return 0;
}
/* 最小値最大値に関しては元のままでは大きすぎたので再度定義して確認するようにした
 * 8進数と16進数では負の値に関して何か負の時の決まりがあるのか一定の値を表示した
 * 後に1ごとに変わる値が表示された
 */
