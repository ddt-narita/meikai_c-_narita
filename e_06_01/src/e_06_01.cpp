//演習０６－０１
//受け取ったint型の因数の値が負なら－1、0なら0、正なら１を返却する関数の作成
//
//5月8日
//成田修之
#include<iostream>
using namespace std;

//sign_of関数
//受け取ったint型の因数の値が負なら－1、0なら0、正なら１を返却する
//int型の整数
//返却値は判定によって－1，0，1をとるint型のsign_of
//5月8日
//成田修之
int sign_of(int nInput)
{
	int sign_of;

	//引数nInputの正負０の判定を行い返却値に代入。
	if (nInput > 0) {
		sign_of = 1;
	} else if(nInput < 0) {
		sign_of = -1;
	} else {
		sign_of = 0;
	}
	//返却値sign_of
	return sign_of;
}

int main()
{
	//入力する数で実引数
	int nInput;
	cout <<"入力された値の記号を判定します。-1…負、0…0、1…正\n"
			"整数を入力してください：";
	cin  >> nInput;

	//判定に使う返却された値をとる変数
	int nHantei = sign_of(nInput);
	//返却された値を表示
	cout << nHantei;
	return 0;
}
