//演習０５－１３
//2次配列の初期化を実際に試す
//
//5月8日
//成田修之
#include<iostream>
using namespace std;
int main ()
{
	//配列の初期化をする
	int nArray[3][2]={
			{2,4},{6,6},{4,23}
	};

	//正しく初期化出来ているか確認
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 2; j++) {
			cout << "nArray[" <<  i <<"][" << j << "] = " <<nArray[i][j] << "\n";
		}
	}
}
