//演習０３－２５ main
/*list3-3の数当てゲームに回数制限を設け回数以内にこたえられなかったら答えを
表示して終了するプログラムを作成する*/
//
//5月3日
//成田修之
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	//
	srand(time(NULL));

	int nNumber = rand() %100;
	int nInputNumber;

	cout << "数当てゲームを開始！！\n";
	cout << "0～99の数を10回以内当ててください\n";

	//数当てを１０回繰り返す
	for(int i = 0; i < 10; i++) {
		cout << "いくつかな：";
		cin >>nInputNumber;

		if(nInputNumber > nNumber) {
			cout << "もっと小さい数だよ。\n";
		} else if(nInputNumber < nNumber) {
			cout << "もっと大きい数だよ。\n";
		} /*正解したときは「正解です」と表示して下の「回数以内に～」の先に
		  //行くためにgoto文を使う*/
		  else if(nInputNumber == nNumber) {
			cout << "正解です!";
			goto Exit;
		}
	}
	cout << "回数以内に正解できませんでした\n答えは：" << nNumber <<"です";
	Exit:
		;

}
