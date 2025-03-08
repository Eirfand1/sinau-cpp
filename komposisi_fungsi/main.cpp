#include <cstdlib>
#include <iostream>
using namespace std;


int fungsi(int A, int B, int K, int x){
	if(K == 0) return x;
	return fungsi(A, B, K - 1, abs(A * x + B));
}

int main() {
	int A, B, K, x; 
	cin >> A >> B >> K >> x;

	int hasil = fungsi(A, B, K, x);
	cout << hasil;
}


