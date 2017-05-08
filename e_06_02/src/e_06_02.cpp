//演習０６－０２
//3つのint型引数の最小値を求める関数の作成
//
//5月8日
//成田修之
#include<iostream>
using namespace std;
int min (int nInput_1,int nInput_2,int nInput_3)
{
	int nMin =nInput_1;
	if(nMin > nInput_2) {
		nMin = nInput_2;
	}
	if(nMin > nInput_3) {
		nMin = nInput_3;
	}
	return nMin;
}

int main()
{
	int nInput_1;
	int nInput_2;
	int nInput_3;
	cout << "最小値を求めます。\n";
	cout << "整数A：";
	cin >> nInput_1;
	cout << "整数B：";
	cin >> nInput_2;
	cout << "整数C：";
	cin >> nInput_3;

	int nMin = min(nInput_1,nInput_2,nInput_3);
	cout << "最小値は：" << nMin;

}
