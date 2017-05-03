//演習０３－２４ main
/*list3-17を平均も求めるように作成。
ただし負の数の個数は平均を求めるときの分母から除外*/
//
//５月３日
//成田修之
#include<iostream>
using namespace std;

int main (){
	int nCount;
	cout << "整数を加算します\n";
	cout << "何個加算しますか：";
	cin >> nCount;

	//正の数だけを数えるものを宣言
	int nCountPlus;
	int nSum = 0;

	for(int nSumple = 0; nSumple < nCount; nSumple++){
		int nInput;
		cout << "整数：";
		cin >> nInput;
		if(nInput < 0) {
			cout << "\a負の数は加算しません。\n";
			continue;
		}
		nSum += nInput;
		//continue文を通った時(負の数)には加算されない
		nCountPlus++;
	}
	//平均は合計を個数で割ったものなので
	cout << "合計は" << nSum << "で平均は" << nSum/nCountPlus << "です。\n";
}
