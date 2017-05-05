#include<iostream>					//main
using namespace std;				//入力された月の季節を判定
									//
int main(){						//5月2日
									//成田修之
	int n;

	//キーボードから１～１２の数を入力
	cout<<"１～１２の整数を入力：";
	cin>>n;

	//入力された値の月の季節を表示
	//１２や１などラベルのあとbreak文がないのでbreak文があるところまで落ちていく
	switch(n){
	case 12:
	case 1:
	case 2: cout<<"冬";		break;
	case 3:
	case 4:
	case 5: cout<<"春";		break;
	case 6:
	case 7:
	case 8: cout<<"夏";		break;
	case 9:
	case 10:
	case 11:cout<<"秋";		break;
	}
}
