/* 演習11-06
 * 演習10-01で作成した人間クラスに誕生日を格納するデータメンバとそれを返却するメンバ関数の作成
 * 作成日：5月22日
 * 作成者：成田修之
 */

#include<iostream>
#include"e_11_06_person.h"
#include<string>
using namespace std;

int main()
{
	//自分の情報で初期化
	Person yourData("成田修之",20,175,67,0.1,Date(1996,12,21));

	//自分の情報を表示
	yourData.print_spec();

	//誕生日を表示
	cout << yourData.opening_date();
}
