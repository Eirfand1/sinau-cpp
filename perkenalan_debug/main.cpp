#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;

	long jumlah = 0;
	for (int i = 1; i <= N; i++) {
		long x;	
		cin >> x;
		jumlah += x;
	}
	cout << jumlah << endl;
}

