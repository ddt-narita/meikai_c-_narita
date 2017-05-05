#include<ctime>				//main
#include<cstdlib>				//おみくじプログラム
#include<iostream>				//
								//5月2日
using namespace std;			//成田修之

int main(){
	srand(time(NULL));

	//7つのランダムな値を作成
	int rucky = rand()%7;

	//生成された値によってラベルに飛ぶ
	switch(rucky){
	case 0: cout<<"大吉\n";		break;
	case 1: cout<<"中吉\n";		break;
	case 2: cout<<"小吉\n";		break;
	case 3: cout<<"吉\n";		break;
	case 4: cout<<"末吉\n";		break;
	case 5: cout<<"凶\n";		break;
	case 6: cout<<"大凶\n";		break;

	}

}
