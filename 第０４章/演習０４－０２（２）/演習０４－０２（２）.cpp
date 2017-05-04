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
	for(int i = 0; ;i++) {
		cout << oct << i << ' ';
		cout << dec << i << ' ';
		cout << hex << i << ' ';

		if(i == UINT_MAX) {
			break;
		}
	cout << '\n';
	}
}
