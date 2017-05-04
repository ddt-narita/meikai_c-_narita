//演習０４－０２
//int型の全数値を8進数、10進数、16進数で表示
//
//5月4日
//成田修之
#include<climits>
#include<iostream>
using namespace std;

int main()
{
	for(int i = INT_MIN; ; i++) {

		//8進数
		cout << oct << i << ' ';
		//10進数
		cout << dec << i << ' ';
		//16進数
		cout << hex << i <<'\n';
		if(i == INT_MAX) {
			break;
		}
	}
}
//INT_MAXが2147483647で設定されているため実行しようとすると途方もない数になってしまった
//8進数と16進数に関しては負の数の表示があっているのかわからなかった
