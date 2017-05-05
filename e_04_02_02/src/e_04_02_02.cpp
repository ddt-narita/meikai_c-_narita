//演習０４－０２
//unsigned型の全数値を8進数、10進数、16進数で表示
//
//5月4日
//成田修之
#include<climits>
#include<iostream>
using namespace std;

int main()
{
	//unsigned型は最小値が0なので0から始める
	for(int i = 0; ;i++) {
		//8進数
		cout << oct << i << ' ';
		//10進数
		cout << dec << i << ' ';
		//16進数
		cout << hex << i << ' ';

		if(i == UINT_MAX) {
			break;
		}
	cout << '\n';
	}
}
