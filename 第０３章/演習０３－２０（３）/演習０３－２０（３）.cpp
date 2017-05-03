#include <iostream>
using namespace std;

int main()
{
	int nTriungle;
	cout << "右上直角三角形を表示します\n段数は：";
	cin >> nTriungle;

	for(int nTriungle1 = 1; nTriungle1 < nTriungle; nTriungle1++){
		for(int nTriungle2 = 1; nTriungle2 < nTriungle; nTriungle2++){
			if((nTriungle2-nTriungle1) >= 0){
				cout << "*";
			}
			else{
				cout <<" ";
			}
		}
		cout << "\n";
	}

}
