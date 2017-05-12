/* 演習05-05
 * 異なる要素が同じ値をとらないように演習０５－０３を書き換え
 * 作成日：5月6日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//ランダムな値を生成する種を設定
	srand(time(NULL));

	const int nArrayNumber = 6;		//要素数
	int nArray[nArrayNumber] = {0};		//int型の配列


	//要素数分繰り返す
	for(int i = 0 ; i < nArrayNumber; i++) {
		//ランダムな値を代入
		nArray[i] = rand() % 10 + 1;
			//nArray[0]～nArray[i-1]と比べる
			for(int j = 0; j < i ;j++) {
				//同じものがあるとき
				if (nArray[i] == nArray[j]) {
					//その数と同じにならないようなランダムな値を代入
					for (;nArray[i] == nArray[j];) {
						nArray[i] = rand() % 10 +1;
					}
					/*もう一度nArray[0]から比べなおす、for文の最後に
					 *インクリメントがあるので-1に設定
					 */
					j = -1;
				}
			}

	}

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素を表示
		cout<<"nArray[" << i << "] = " << nArray[i] <<'\n';
	}
	//main関数の返却値
	return 0;
}
