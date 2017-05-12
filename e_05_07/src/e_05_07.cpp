/*演習05－07
 * 演習05－06を縦方向の棒グラフで表示、最下段には要素の添字を10で割った剰余を表示
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
	//ランダムな値を作成する規準を設定
	srand(time(NULL));

	const int nArrayNumber = 15;	//配列nArrayの要素数
	int nArray[nArrayNumber];		//int型の配列
	int nAstaMax = 10;				//0からいくつのランダムな値を代入するか

	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//各要素にランダムな値を生成して代入
		nArray[i] = rand() % (nAstaMax + 1);
	}

	//0から最大数まで繰り返す
	for(int i = 0; i < nAstaMax; i++) {
		//要素数分繰り返す
		for(int j = 0; j < nArrayNumber; j++) {

			//ランダムに代入した各要素の値が最大値からその列の値を引いた値以上の時
			if(nArray[j] >= (nAstaMax - i)) {
				//アスタリスクを表示
				cout << " *";
			//未満の時
			} else {
				//空白文字を表示
				cout << "  ";
			}
		}
		//要素ごとに改行
		cout << " \n";
	}
	//要素数の2倍と1個'-'で区切りを表示
	for(int i = 0; i < nArrayNumber * 2 + 1; i++) {
		//-を表示する
		cout << '-' ;
	}
	//ラベルをその下に書くよう改行
	cout << "\n";
	//要素数分繰り返す
	for(int i = 0; i < nArrayNumber; i++) {
		//一つ空白を挟んで10で割った剰余を表示する
		cout << ' ' << i%10;
	}

	//main関数の返却値
	return 0;
}
