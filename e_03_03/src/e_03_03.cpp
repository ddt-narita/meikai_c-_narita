#include<iostream>
using namespace std;

int main(){

	int a,b;

	cout <<"整数A：";	cin>>a;
	cout <<"整数B：";	cin>>b;

	int t;

	//aとbをaが小さくなるようにソートする
	if(a>b){
		t=a;
		a=b;
		b=t;
	}

	int n=a;

	//nの値を表示してnにn+1を代入する
	do{
		cout<<n<<" ";
		n=n+1;
	//nがb以下である限り繰り返す
	}while(n<=b);


}
