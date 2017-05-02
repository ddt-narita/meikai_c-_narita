#include<iostream>						//main
using namespace std;					/*2つの整数を読み込み大きいほう小さいほう
										を表示。ただし同じ値なら同じ値だと表示。*/
 int main(){							//
	 	 	 	 	 	 	 	 		//5月1日
	 int a,b;							//成田修之
	  cout<<"整数a：";	cin>>a;
	  cout<<"整数b：";	cin>>b;

	  //maxとminを宣言しておく
	  int min,max;

	  //aとｂどちらがでかいか評価し、小さいほうをminでかいほうをmaxに代入
	  if(a>b){
			  min=b;
			  max=a;
		  }
	  else{
			  min=a;
			  max=b;
		  }

	  //もしaとbの値が同じなら同じだと表示し、そうでなければ
	  //小さいほうと大きいほうを表示する。
	  if(a==b)
		  cout<<"2つの値は同じです。\n";
	  else{
		  cout<<"小さいほうの値は"<<min<<"です。\n";
		  cout<<"大きいほうの値は"<<max<<"です。\n";
	  }
 }
