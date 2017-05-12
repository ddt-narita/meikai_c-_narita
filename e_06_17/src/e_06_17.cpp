/* 演習06-17
 * 呼び出された回数を表示する関数put_countを作成
 * 作成日：5月12日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

/* 関数put_count
 * 呼び出された回数を表示する関数
 * 引数はなし
 * 返却数もなし
 * 作成日：5月12日
 * 作成者：成田修之
 */

void put_count()
{
	static int nCount;		//静的記憶域期間を持つint型の整数
	//呼び出されたらインクリメントする
	nCount++;
	//呼び出されたのが何回目なのか表示
	cout << "put_count：" << nCount << "回目\n";
}

int main()
{
	int nCount;		//何回呼び出すか入力のための変数
	//何回呼び出すか入力を促す表示
	cout<< "何回呼び出しますか：";
	//キーボードから入力
	cin >> nCount;

	//入力された分まで繰り返す
	for(int i = 0; i < nCount; i++) {
		//関数put_countを呼び出す
		put_count();
	}

	//main関数の返却値
	return 0;

}
