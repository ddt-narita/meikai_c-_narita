//演習05－07
//演習05－06を縦方向の棒グラフで表示、最下段には要素の添字を10で割った剰余を表示
//
//5月6日
//成田修之
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	//ランダムな値を作成する規準を設定
	srand(time(NULL));
	//配列nArrayの要素数
	const int nArrayNumber = 15;
	int nArray[nArrayNumber];

	//0からいくつのランダムな値を代入するか
	int nAstaMax = 10;

	//各要素に0～nAstaMaxのランダムな値を代入
	for(int i = 0; i < nArrayNumber; i++) {
		nArray[i] = rand() % (nAstaMax + 1);
	}

	//0～nAstaMax-1行、0～nArrayNumber-1列と考えて
	for(int i = 0; i < nAstaMax; i++) {
		for(int j = 0; j < nArrayNumber; j++) {

			//ランダムに代入した各要素の値が最大値からその列の値を引いた値以上なら
			//アスタリスクを表示し、未満なら空白を表示
			if(nArray[j] >= (nAstaMax - i)) {
				cout << " *";
			} else {
				cout << "  ";
			}
		}
		cout << " \n";
	}
	//要素数の2倍'-'を表示
	for(int i = 0; i < nArrayNumber * 2 + 1; i++) {
		cout << '-' ;
	}
	cout << "\n";
	//要素の添字を10で割った剰余を表示
	for(int i = 0; i < nArrayNumber; i++) {
		cout << ' ' << i%10;
	}
}
