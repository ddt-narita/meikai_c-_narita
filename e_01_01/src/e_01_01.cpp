/* 演習 01-01
 * #include指令が欠如しているとどうなるか、プログラムをコンパイルして検証する。
 * 作成日：5月1日
 * 作成者：成田修之
 * 更新日：5月8日
 * 更新者：成田修之 */

using namespace std;

int main()
{
	//ヘッダのない状態で"hello"の表示
	cout << "hello";

	//返却値0
	return 0;
}
/*結果 ヘッダが欠如しているとcoutを認識できなかったがコンソール画面のほうでは
 * "hello"と表示がされた。
 * 環境側のほうで補てんのようなことがされたのだと思った。
 */
