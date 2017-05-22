#include<string>
#include<iostream>
#include"e_11_04_Account.h"

using namespace std;

//クラスAccountのコンストラクタを定義
Account::Account(string name,string num,long amnt,int y, int m, int d)
{
	full_name =name;	//データメンバに名前を入力
	number =num;		//データメンバに口座番号を入力
	crnt_balance =amnt;	//データメンバに金額を設定
}

//口座に引数分足すクラスAccountのメンバ関数の定義
void Account::deposit(long amnt)
{
	//
	crnt_balance += amnt;
}

//口座から引数分引くクラスAccountのメンバ関数の定義
void Account::withdraw(long amnt)
{
	//口座から引く
	crnt_balance -= amnt;
}

//挿入子の多重定義
std::ostream& operator<<(std::ostream& s,const Date& x)
{
	//クラスDateを出力するときメンバ関数to_stringを呼び出して年月日を表示
	return s << x.to_string();
}
