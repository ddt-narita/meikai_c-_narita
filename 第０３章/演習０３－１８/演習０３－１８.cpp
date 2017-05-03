#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	//i(縦)が1～9まで以下を繰り返す
	for(int i = 1; i <= 9; i++){

		//j(横)が1～9まで以下を繰り返す
		for(int j = 1; j <= 9; j++){

			//もしi*jが二けたなら空白文字を１つ、
			//1桁なら空白文字を2つ出力するようにする
			//2桁なら10で割った数が1以上9以下であることを利用する
			if((i*j)/10 >=1)
				cout << " " << i*j;
			else
				cout << "  " << i*j;
		}
		//jが1～9まで終わってiが1上がるまえに改行文字を出力する
		cout << '\n';
	}
}
