#include<ctime>						//main
#include<cstdlib>						//グーチョキパーをランダムに表示
#include<iostream>						//
										//5月1日
using namespace std;					//成田修之

int main(){
	srand(time(NULL));

	//０、１，２の3つの中からランダムな数を生成
	int hand=rand()%3;

	//生成された値に応じたラベルへ飛ぶ
	switch(hand){
	case 0: cout <<"グー\n";		break;
	case 1: cout <<"チョキ\n";		break;
	case 2: cout <<"パー\n";		break;

	}

}
