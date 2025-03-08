#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;	

	int x = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			cout << x;
			x++;
			if(x == 10){
				x = 0;
			};	
		}
		cout << endl;

	}
}
