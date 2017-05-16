/*演習06-01
 * 受け取ったint型の因数の値が負なら－1、0なら0、正なら１を返却する関数の作成
 * 作成日：5月8日
 * 作成者：成田修之
 * 更新日：5月11日
 * 更新者：成田修之
 */
#include<iostream>
using namespace std;

/* sign_of関数
 * 受け取ったint型の因数の値が負なら－1、0なら0、正なら１を返却する
 * int型の整数
 * 返却値は判定によって－1，0，1をとるint型のsign_of
 * 作成日：5月8日
 * 作成者：成田修之
 */
int sign_of(int nInput)
{
	//判定を行い値を代入する返却値
	int sign_of;

	//入力された値が0より大きいとき
	if (nInput > 0) {
		//返却値に代入
		sign_of = 1;
	//0より小さいとき
	} else if(nInput < 0) {
		//－1を代入
		sign_of = -1;
	//0の時
	} else {
		//0を代入
		sign_of = 0;
	//
	}
	//返却値sign_of
	return sign_of;
}

int main()
{

	int nInput;		//入力する数で実引数

	//判定する値の入力を促す表示
	cout <<"入力された値の記号を判定します。-1…負、0…0、1…正\n"
			"整数を入力してください：";
	//キーボードから入力
	cin  >> nInput;

	//返却された値を表示
	cout << sign_of(nInput);
	//main関数の返却値
	return 0;
}
