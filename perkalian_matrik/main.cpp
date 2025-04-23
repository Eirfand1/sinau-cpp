#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, P;
	cin >> N >> M >> P;

	vector<vector<int> > A;
	for(int n = 0; n < N; n++) {
		vector<int> subA;
		for (int m = 0; m < M; m++) {
			int x;
			cin >> x;
			subA.push_back(x);
		}
		A.push_back(subA);
	}

	vector<vector<int> > B;

	for(int m = 0; m < M; m++) {
		vector<int> subB;
		for (int p = 0; p < P; p++) {
			int x;
			cin >> x;
			subB.push_back(x);
		}
		B.push_back(subB);
	}

	for (int n = 0; n < N; n++){
		for (int p = 0; p < P; p++) {
			int x;
			int y = 0;
			for (int m = 0; m < M; m++) {
			    x = A[n][m] * B[m][p];
				 y = y + x;
			}	
			cout << y << " ";
		}
		cout << endl;
	}


}
