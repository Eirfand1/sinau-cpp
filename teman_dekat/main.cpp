#include <climits>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, D;
	cin >> N >> D;

	vector<int> X;
	vector<int> Y;

	int x, y;
	for (int n = 0; n < N; n++) {
		cin >> x >> y;
		X.push_back(x);
		Y.push_back(y);
	}

	int terkecil = INT_MAX;
	int terbesar = 0;
	int nilai;	
	for (int i = 0; i < N; i++ ) {
		for (int j = i+1; j < N; j++) {
			x = abs(X[i] - X[j]);
			y = abs(Y[j] - Y[i]);
			nilai = pow(x, D) + pow(y, D);
			if (nilai < terkecil) {
				terkecil = nilai;	
			}
			if (nilai > terbesar) {
				terbesar = nilai;	
			}
		}
	}
	cout << terkecil << " " << terbesar;
}
