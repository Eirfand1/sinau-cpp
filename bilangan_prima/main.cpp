#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	int N, Q, cnt;	
	cin >> N;

	vector<int> prim;
	for(int i = 1; i <= N; i++) {
		cin >> Q;
		prim.push_back(Q);
	}

	for(int j = 1; j <= N; j++){
		int curr = prim[j - 1];
		if(curr <= 1) {
			cout << "BUKAN" << endl;
		}
		for (int i = 2; i * i <= curr; i++) {
			if (curr % i == 0)
				cnt++;
		}
		if (cnt > 0) {
			cout  << "BUKAN" << endl;
		}
		else{
			cout << "YA" << endl;
		}
		cnt = 0;
	}
}
