
#include<iostream>
#include"e_11_04_Account.h"

using namespace std;

int main()
{
	/* 鈴木さんのアカウントをコンストラクタを読んで初期化。開設日は実引数として渡す
	 * もののクラスDataに関して明示的に初期化していないのでデフォルトコンストラクタを呼び出し
	 * 今日の日付で初期化されていることを確認
	 */
	Account suzuki("鈴木隆一","12345678",1000,2125,1,24);

	//鈴木さんの口座から200円おろす
	suzuki.withdraw(200);

	//鈴木さんの口座の情報を公開する
	cout << "鈴木君の口座\n";
	cout << "名義指名：" << suzuki.name() << '\n';
	//口座番号をメンバ関数を読んで表示
	cout << "口座番号：" << suzuki.no() << '\n';
	//預金残高をメンバ関数を
	cout << "預金残高：" << suzuki.balance() << "円\n";
	//開設日が今日の日付になっていることを確認
	cout << "口座開設日" << suzuki.opening_date() << '\n';
	//main関数の返却値
	return 0;
}
