#include<iostream>								//main
using namespace std;							//1～nまでの和を式として表示
int main (){									//
	int n;										//5月3日（水）
	cout <<"1からnまでの和を求めます。\n";		//成田修之

	//1～nまでの和なのでｎが正の整数になるまで繰り返す
	do{
	cout <<"nの値：";
	cin>>n;
	}while(n<=0);

	int sum=0;

	//iを1～n－1まではiと+を表示、nの時はiと=を表示するように繰り返す
	for (int i =1 ;i<=n ; i++ )
		if(i<n){
			cout<<i<<" + "; sum+=i;
		}
		else{
			cout<<i<<" = "; sum+=i;
		}
	cout<<sum;

}
