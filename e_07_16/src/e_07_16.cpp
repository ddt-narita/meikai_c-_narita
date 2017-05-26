/* 演習07-16
 * double型の配列を動的に生成するプログラムの作成、要素数はキーボードから入力し、
 * 生成に失敗した場合の処理も行う
 * 作成日：5月16日
 * 作成者：成田修之
 */
#include<new>
#include<iostream>
using namespace std;

int main()
{
	//要素数
	int nInputNumber;
	//要素数の入力を促す
	cout << "要素数を入力してください";
	//キーボードから入力
	cin >> nInputNumber;
	//以下を試してみる

	try{
		//入力された要素数の動的な配列を生成
		double* nArray = new double[nInputNumber]{0};
		for(int i = 0; i < nInputNumber; i++){
			cout << nArray[i] <<"\n";
		}
		delete [] nArray;

	//上が出来なかったとき
	} catch(bad_alloc&) {
		//生成に失敗したこととプログラムを終了することを表示
		cout << "生成に失敗したのでプログラムを終了します";
		//プログラムを終了するための返却値
		return 1;
	}
	return 0;


}
