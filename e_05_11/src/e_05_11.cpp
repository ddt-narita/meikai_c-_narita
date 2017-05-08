//演習05－11
//6人2科目の点数を読み込んで科目ごとの合計点と平均点、学生ごとの合計点と平均を求める
//
//5月11日
//成田修之
#include<iostream>
using namespace std;
int main () {

	//生徒の数
	const int nStudentNumber = 6;
	//科目数
	const int nSubNumber = 2;
	//[生徒数][科目数]の2次配列
	int nArray[nStudentNumber][nSubNumber];

	//各要素に入力する
	for(int i =0; i < nStudentNumber; i++) {
		for(int j =0; j < nSubNumber; j++) {

			//jの剰余を使って国語と数学を交互に入力する
			if(j % 2 == 0){
				cout << i+1 << "番目の人の国語の点数：";
				cin >> nArray[i][j];
			} else if(j % 2 == 1){
				cout << i+1 << "番目の人の数学の点数：";
				cin >> nArray[i][j];
			}
		}
	}

	//科目ごとの合計
	int nSumJap=0;
	int nSumMath=0;
	//科目ごとの合計を求める
	for(int i = 0; i < nStudentNumber; i++) {
		for(int j = 0; j < nSubNumber; j++) {
			//jの剰余をつかって科目ごとの合計を出す
			if(j % 2 == 0){
				nSumJap += nArray[i][j];
			} else if (j % 2 ==1){
				nSumMath += nArray[i][j];
			}
		}
	}

	//平均は合計を生徒数で割ったものnSumはどちらもint型なのでdoule型にキャストする
	double nAveJap = static_cast<double>(nSumJap) / nStudentNumber;
	double nAveMath = static_cast<double>(nSumMath) / nStudentNumber;
	cout << "国語の合計点は：" << nSumJap	<< "\n平均点は：" << nAveJap <<"\n";
	cout << "数学の合計点は：" << nSumMath	<< "\n平均点は：" << nAveMath <<"\n";

	//各生徒の合計と平均（6人分）の配列
	int nSumStudent[nStudentNumber];
	double nAveStudent[nStudentNumber];

	for(int i =0; i < nStudentNumber; i++) {

		//生徒ごとの合計は同じ行ごとの合計
		nSumStudent[i] = nArray[i][0] + nArray[i][1];
		//生徒ごとの平均（合計はint型なのでdouble型にキャスト
		nAveStudent[i] = static_cast<double>(nSumStudent[i]) / nSubNumber;
		//合計と平均を表示
		cout << i <<"番目の生徒合計は：" << nSumStudent[i] << "\n" <<"平均は："<< nAveStudent[i] << "\n";

	}
}
