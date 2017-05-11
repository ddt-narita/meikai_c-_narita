/* 演習 03-13
 * 身長と標準体重の対応表
 * 作成日：5月3日
 * 作成者：成田修之
 * 更新日：5月10日
 * 更新者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	int nSmall;		//小さいほうの身長
	int nTall;		//大きいほうの身長
	int nInterval;	//何cm毎に表示するかの間隔

	//身長なので0以上かつ標準体重求める式より100大きい値
	do{
		//低いほうの身長
		cout << "何cmから：";
		//キーボードから入力
		cin >> nSmall;

	//100より低い値である限り続ける
	} while(nSmall <= 100);

	do{
		//大きいほうの身長の入力を促す
		cout	<< "何cmまで：";
		//キーボードから入力
		cin		>> nTall;

	//小さいほうより大きいほうがのほうがでかくなるように
	}while (nTall <= 100 || nSmall > nTall);


	do{
		//間隔を何cmにするか入力を促す
		cout << "何㎝ごと：";
		//キーボードから入力
		cin>>nInterval;

	//0より大きいかつ「何㎝ごと」なので身長の差より大きくならないように
	} while(nInterval <= 0 || nTall - nSmall < nInterval);

	//身長と標準体重を並べて書いていくことの明示
	cout <<"身長　標準体重\n";


	//小さいほうの身長の値で初期化した間隔の値ずつ増えていくiを宣言
	for(int i = nSmall; i <= nTall; i += nInterval) {
		//身長と標準体重を表示
		cout << i << "    " << (i - 100) * 0.9 << "\n";
	}

	//main関数の返却値0
	return 0;
}
/* 何cmかを入力する際に０が入力出来るようにしてしまうと次のfor文でtが増えず
 * 無限にループしてしまうことに注意してやる
 */

