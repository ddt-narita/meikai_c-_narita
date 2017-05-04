#include<iostream>
using namespace std;
int main()
{
	int nPiramidFloar; //入力された段のピラミッドの段数

	cout	<< "n段の下向きの数字ピラミッドを表示します。\n何段ですか：";
	cin		>> nPiramidFloar;

	//カウントに使うi行目
	for(int i = 1 ; i <= nPiramidFloar; i++) {

		//空白文字をカウントするのに使うj_1列目
		//i行目ではi-1個表示する
		for(int j_1 = 1; j_1 <= ( i - 1 ); j_1++ ) {
			cout << " ";
		}

		//i%10を表示する数をカウントするj_2列目
		//i行目では(n-i)*2;1個表示する
		for(int j_2 = 1 ; j_2 <= ((nPiramidFloar-i) * 2 + 1); j_2++) {
			cout << i%10;
		}

		//また空白文字をカウントするj_3列目
		//数字の左側空白文字と同じ数表示
		for(int j_3 = 1 ; j_3 <=( i - 1 ); j_3++) {
			cout << " ";
		}
		cout << '\n';
	}
}
