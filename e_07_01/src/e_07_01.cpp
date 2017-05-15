/* 演習07-01
 * list7-2に&ptrの表示を追加したプログラムを作成
 * 作成日：5月15日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;

int main()
{
	int nSample = 135;
	cout << "nSample :" << nSample << "\n";
	cout << "&nSanple :" << &nSample << "番地\n";

	int*ptr = &nSample;
	cout << "ptr：" << ptr << "番地\n";
	cout << "*ptr :" << *ptr << "\n";
	cout << "&ptr ：" << &ptr << "\n";

}
