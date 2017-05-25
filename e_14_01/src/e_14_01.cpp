/* 演習14-01
 * デクストラクタがデータの逆順に呼び出されることを確認するためのプログラムの作成
 * 作成日：5月25日
 * 作成者：成田修之
 */

#include<iostream>

using namespace std;

class Int {
	//Int型のオブジェクトのデータメンバ
	int n;
public:
	//入力された値でオブジェクトを生成するコンストラクタ
	Int(int nInput) :n(nInput)
	{
	}

	//デクストラクタ
	~Int()
	{
		/*デストラクタが呼び出されるごとにそのオブジェクトの値を表示。
		 * 逆順に呼び出されていることを確認
		 */
		cout << n << "\n";
	}
};

class abc {
	Int a;	//Int型のオブジェクト
	Int b;	//Int型のオブジェクト
	Int c;	//Int型のオブジェクト
public:

	//入力された値でa,b,cの初期化をするコンストラクタ
	abc(int aa, int bb, int cc) :a(aa),b(bb),c(cc)
	{
	}
};

int main()
{
	/* クラスabcのオブジェクトABCを作ってこのオブジェクトの生存期間が終わる前に
	 * デストラクタがきちんと動作するか、動作する順番はどうかなど確認
	 */
	abc ABC(1,2,3);
}
