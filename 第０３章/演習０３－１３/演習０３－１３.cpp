#include<iostream>						//main
using namespace std;					//身長と標準体重の対応表の作成
										//
int main(){							//5月3日
										//成田修之
	int a,b,c;

	//身長なので0より大きい値
	do{
		cout <<"何cmから：";	cin>>a;
	}while(a<0);

	//0より大きい値かつ「から」「まで」が決まっているので
	//aよりbのほうがでかくなるように
	do{
		cout<<"何cmまで：";		cin>>b;
	}while (b<0||a>b);

	//0より大きいかつ「何㎝ごと」なので低いほうの身長より大きくならないように
	do{
		cout<<"何㎝ごと：";		cin>>c;
	}while(c<0||a<c);

	cout <<"身長　標準体重\n";


	//aで初期化したcずつ増えていくtを宣言して表示。空白文字でスペースを空けて
	//標準体重を計算して表示
	for(int t=a; t<=b ; t+=c )
		cout<<t<<"    "<<(t-100)*0.9<<"\n";

}
