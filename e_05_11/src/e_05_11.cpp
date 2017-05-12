/*演習05－11
 * 6人2科目の点数を読み込んで科目ごとの合計点と平均点、学生ごとの合計点と平均を求める
 * 作成日：5月11日
 * 作成者：成田修之
 */

#include<iostream>
using namespace std;
int main ()
{
	//学年の数
	const int nGrade =2;
	//生徒の数
	const int nStudentNumber = 6;
	//科目数
	const int nSubNumber = 2;
	//[学年][生徒数][科目数]の3次配列
	int nArray[nGrade][nStudentNumber][nSubNumber];


	//学年の数だけ繰り返す
	for(int i =0; i < nGrade; i++) {
		//生徒数だけ繰り返す
		for(int j =0; j <  nStudentNumber; j++) {
			//科目の数だけ繰り返す
			for(int k = 0; k <nSubNumber; k++) {
				//kの剰余を使って国語と数学を交互に入力する
				if(k % 2 == 0){
					//国語の点数の入力を促す
					cout << i + 1 << "学年" << j+1 << "番目の人の国語の点数：";
					//キーボードから入力
					cin >> nArray[i][j][k];
					//剰余が1の時
				} else {
					//数学の点数の入力を促す表示
					cout << i + 1 << "学年" << j+1 << "番目の人の数学の点数：";
					//キーボードから入力
					cin >> nArray[i][j][k];
				}
			}
		}
	}

	int nSumJap=0;		//国語の点の合計
	int nSumMath=0;		//数学の点の合計


	//学年分繰り返す
	for(int i = 0; i < nGrade; i++) {

		nSumJap=0;		//国語の点の合計を学年ごとにリセット
		nSumMath=0;		//数学の点の合計を学年ごとにリセット

		//生徒数分繰り返す
		for(int j = 0; j <nStudentNumber; j++) {
			//科目数分繰り返す
			for(int k =0; k < nSubNumber; k++){
				//jの剰余をつかって科目ごとの合計を出す
				if(k % 2 == 0){
					//国語の合計に国語の点が入力されている配列の要素を加算して代入
					nSumJap += nArray[i][j][k];
					//剰余が1の時
				} else {
					//数学の点の合計に数学の点が入力されている配列の要素を加算して代入
					nSumMath += nArray[i][j][k];
				}
			}
		}

		/*平均は合計を生徒数で割ったものnSumはどちらもint型なのでdoule型にキャストする
		 *また学年ごとで合計を使うためこの位置で宣言
		 */
		double nAveJap = static_cast<double>(nSumJap) / nStudentNumber;
		double nAveMath = static_cast<double>(nSumMath) / nStudentNumber;

		//i学年の国語について表示
		cout << i + 1 << "学年の国語の合計点は：" << nSumJap	<< "\n平均点は：" << nAveJap <<"\n";
		//i学年数学について表示
		cout << i + 1 << "学年の数学の合計点は：" << nSumMath	<< "\n平均点は：" << nAveMath <<"\n";
	}

	//各生徒の合計の配列
	int nSumStudent[nGrade][nStudentNumber];
	//各生徒の平均の配列
	double nAveStudent[nGrade][nStudentNumber];


	//学年数分繰り返す
	for(int i =0; i < nGrade; i++) {
		//生徒数分繰り返す
		for(int j = 0; j < nStudentNumber; j++) {
			//生徒ごとの合計は同じ行ごとの合計
			nSumStudent[i][j] = nArray[i][j][0] + nArray[i][j][1];
			//生徒ごとの平均（合計はint型なのでdouble型にキャスト
			nAveStudent[i][j] = static_cast<double>(nSumStudent[i][j]) / nSubNumber;
			//合計と平均を表示
			cout << i + 1 << "学年" << j + 1 <<"番目の生徒合計は：" << nSumStudent[i][j] << "\n";
			cout << "平均は："	<< nAveStudent[i][j] << "\n";
		}
	}
	//main関数の返却値
	return 0;
}
