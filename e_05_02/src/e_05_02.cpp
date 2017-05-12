/*演習05-02
 * double型の要素数５の配列の全要素に0.0代入して表示
 * 作成日：5月5日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */

#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	//配列dblArrayの要素数(定数)
	const int dArrayNumber = 5;
	//double型で要素数dArrayNumberの配列dblArray
	double dblArray[dArrayNumber];

	//要素分繰り返す
	for(int i = 0; i < dArrayNumber; i++) {
		//各要素に0.0を代入
		dblArray[i] = 0.0;
		//各要素を表示
		cout << "dArray[" << i <<"] ="<<  fixed <<setprecision(1) << dblArray[i] << '\n';
	}
	//main関数の返却値
	return 0;
}
