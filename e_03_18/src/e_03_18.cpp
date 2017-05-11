/* 演習03-18
 * list3-13を操作子を使わずに書き換え
 * 作成日：5月3日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

//操作子を使ってないのでヘッダ<iomanip>は必要ない
#include<iostream>

using namespace std;

int main()
{
	//i(縦)が1～9まで以下を繰り返す
	for(int i = 1; i <= 9; i++){
		//j(横)が1～9まで以下を繰り返す
		for(int j = 1; j <= 9; j++) {

			//もしi*jが二けたなら、

			/*2桁なら10で割った数が1以上9以下であることを利用する
			  2桁の時*/
			if(i * j / 10 >= 1) {
				//空白文字を１つとその値を出力
				cout << " " << i * j;
			//1桁の時
			} else {
				//1桁なら空白文字を2つ出力するようにする
				cout << "  " << i * j;
			}
		}
		//jが1～9まで終わってiが1上がるまえに改行文字を出力する
		cout << "\n";
	}
	//main関数の返却値0
	return 0;
}
