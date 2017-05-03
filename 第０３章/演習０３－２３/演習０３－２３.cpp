//演習０３－２３　main
//list3-15を平均も求めるように書き換え
//
//5月3日
//成田修之
#include<iostream>
using namespace std;

int main(){
	int nCount;
	cout << "整数を加算します\n";
	cout << "何個加算しますか：";
	cin >> nCount;

	int nSum = 0;
	for(int nSumple = 0; nSumple < nCount; nSumple++){
		int nInput;
		cout << "整数(０で終了)：";
		cin >>nInput;
		if(nInput == 0){
			break;
		}
		nSum += nInput;
		}
	//平均は合計を個数で割ったものだから
	cout << "合計は" << nSum <<"で平均は"<< nSum/nCount <<"です。\n";
}
