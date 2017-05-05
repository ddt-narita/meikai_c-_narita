//演習０５－０４
//演習０５－０３を連続する要素が同じ値をとらないように書き換える
//
//５月５日
//成田修之
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//ランダムな値を生成する基準を設定
	srand(time(NULL));

	//int型の配列nArrayの要素数
	const int nArrayNumber = 6;
	int nArray[nArrayNumber];
	int n;

	//各要素に毎回ランダムな値を生成し代入
	for(int i =0; i < nArrayNumber; i++) {
		for( ;n == nArray[i-1];) {
			n =rand() % 10 +1;
		}
		nArray[i] = n;
		cout << "nArray[" << i << "] = " << nArray[i] << '\n';
	}
}
