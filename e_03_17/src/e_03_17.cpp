#include<string>					//main
#include<iostream>					/*list3-1を月の読み込みにおいて1～12以外が
									入力されたとき再入力を求めるようにする*/
using namespace std;				//
									//5月3日
int main ()						//成田修之
{
	string strRetry;

	//入力された値の季節を求めるのをretryにYかｙが入力される限り繰り返す
	do{
		int nMonth;

		//1～12以外の数が入力されると繰り返す
		do{
			cout <<"季節を求めます。\n何月ですか：";
			cin >> nMonth;
		}while(nMonth<1||nMonth>12);

		if(nMonth>=3&&nMonth<=5)
			cout<<"それは春です。\n";
		else if (nMonth>=6&&nMonth<=8)
			cout<<"それは夏です。\n";
		else if(nMonth>=9&&nMonth<=11)
			cout<<"それは秋です。\n";
		else
			cout<<"それは冬です。\n";

		cout<<"もう一度？Y…Yes/N…No：";
		cin>> strRetry;
	}//Yかyが入力されれば繰り返す
	while(strRetry=="Y"||strRetry=="y");

}
