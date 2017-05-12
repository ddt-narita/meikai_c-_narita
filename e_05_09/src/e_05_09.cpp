/*演習05－09
 * 配列aの全要素を配列bに逆順にコピーする
 * 作成日：5月6日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main ()
{
	//ランダムな値を作成する基準を設定
	srand(time(NULL));
	//配列の要素数
	const int nArrayNumber = 5;

	int nArray[nArrayNumber];		//int型の配列
	int nArrayCopy[nArrayNumber];	//int型の上の配列のコピー配列

	//要素数分繰り返す
	for(int i=0; i < nArrayNumber; i++) {
		//各要素にランダムな値を代入
		nArray[i] = rand() % 10;
		//各要素を表示
		cout<<"nArray_1[" << i <<"] = " << nArray[i] << "\n";
	}
	//これから逆順にコピーすることの明示
	cout << "配列を逆順にコピーします。\n";

	//要素数分繰り返す
	for(int i = 0; i<nArrayNumber; i++) {
		//配列を逆順にコピーする nArray_2[nArrayNumber-1]にはnArray_1[i]といったように
		nArrayCopy[i] = nArray[nArrayNumber - i - 1];
		//コピーしたものを表示
		cout << "nArrayCopy[" << i << "] = " << nArrayCopy[i] << "\n";
	}
	//main関数の返却値
	return 0;

}
