#include<string>
#include "e_11_04_Date.h"

class Account
{
	std::string full_name;	//氏名に関するデータメンバ
	std::string number;		//口座番号に関するデータメンバ
	long crnt_balance;		//口座残高に関するデータメンバ
	Date open;				//開設日に関するメンバ部分オブジェクト

public:

	//クラスAccountのコンストラクタの宣言
	Account(std::string name, std::string num, long amnt, int y, int m, int d);

	//引き落としに関するメンバ関数の宣言
	void deposit(long amnt);
	//口座に預けることに関するメンバ関数の宣言
	void withdraw(long amnt);

	//データメンバに入った氏名を返却するメンバ関数
	std::string name() const
	{
		//氏名を設定したデータメンバを返却
		return full_name;
	}
	//口座番号のデータメンバを返却するメンバ関数
	std::string no() const
	{
		//口座番号を返却
		return number;
	}
	//口座残高を返却するメンバ関数
	long balance () const
	{
		//口座残高を返却
		return crnt_balance;
	}
	//口座開設日に関するメンバ部分オブジェクトDateを返却するメンバ関数
	Date opening_date() const
	{
		//メンバ部分オブジェクトを返却
		return open;
	}
};
