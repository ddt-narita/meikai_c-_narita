//演習０３－２１　main
//ｎ段のピラミッドを表示
//
//5月3日
//成田修之
#include<iostream>
using namespace std;

int main()
{
	int nPiramidFloar;		//入力される段数に使う
	cout << "n段のピラミッドを表示します\n何段ですか：";
	cin >> nPiramidFloar;

	//i=1からｎ行目まで以下を繰り返す
	for(int i = 1; i <= nPiramidFloar; i++) {

		//i行目では先にnからiを引いた値個分空白文字を出力
		for(int j = 1; j <= (nPiramidFloar - i); j++) {
			cout << " ";
		}

		//設問の通りi行目に(i-1)*2+1個＊を表示
		for(int k = 1; k <= (i - 1 ) * 2 + 1; k++) {
			cout << "*";
		}
		//＊を表示した後さっきと同じ数空白文字を出力
		//カウントに使う変数はl(エル)
		for(int l = 1; l <= (nPiramidFloar - l); l++) {
			cout << " ";
		}
	cout << "\n";
	}



}
