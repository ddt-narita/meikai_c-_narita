#include <iostream>				//main
using namespace std;				//右上直角三角形を作る
									//
int main()							//5月3日
{									//成田修之
	int nTriungle;
	cout << "右上直角三角形を表示します\n段数は：";
	cin >> nTriungle;

	//縦１～入力された値まで1ずつ増やす間以下を繰り返す
	for(int nTriungle1 = 1; nTriungle1 < nTriungle; nTriungle1++){

		//横を１～入力された値まで1ずつ増やす間以下を繰り返す
		for(int nTriungle2 = 1; nTriungle2 < nTriungle; nTriungle2++){

			//横から縦を引いて0以上なら＊をそれ以外は空白文字を出力する
			if((nTriungle2-nTriungle1) >= 0){
				cout << "*";
			}
			else{
				cout <<" ";
			}
		}

		//縦が1つ増える前に改行文字を出力
		cout << "\n";
	}
}//これもまた操作子をつかった方法が思い浮かばなかったので正方形を作って
//いらないところは空白文字を出力することで代替した。
