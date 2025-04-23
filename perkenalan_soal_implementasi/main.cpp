#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;	
	cin >> N >> M;

	vector<vector<int>> item;
	for(int i = 1; i <= N; i++) {
		vector<int> subItem;
		for (int j = 1; j <= M; j++) {
			int a;
			cin >> a;
			subItem.push_back(a);
		}	
		item.push_back(subItem);
	}
	
	
	vector<vector<int>> rotated(M, vector<int>(N));

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			rotated[j][N - 1 - i] = item[i][j];	
		}
	}

	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			cout << rotated[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
