/* 演習05-13
 * 2次配列の初期化を実際に試す
 * 作成日：5月8日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main ()
{
	//2次配列の初期化をする
	int nArray[3][2]={
			{2,4},{6,6},{4,23}
	};

	//正しく初期化出来ているか確認
	//列数分繰り返す
	for(int i = 0; i < 3; i++) {
		//行数分繰り返す
		for(int j = 0; j < 2; j++) {
			//各要素を表示
			cout << "nArray[" <<  i << "][" << j << "] = " << nArray[i][j] << "\n";
		}
	}
	//main関数の返却値
	return 0;
}
