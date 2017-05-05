//演習０５－０２
//double型の要素数５の配列の全要素に0.0代入して表示
//
//5月5日
//成田修之
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	//配列dblArrayの要素数(定数)
	const int dArrayNumber = 5;
	//double型で要素数dArrayNumberの配列dblArray
	double dblArray[dArrayNumber];

	//各配列に0.0を代入して表示
	for(int i = 0; i < dArrayNumber; i++) {
		dblArray[i] = 0.0;
		cout << "dArray[" << i <<"] ="<<  fixed <<setprecision(1) << dblArray[i] << '\n';
	}
}
