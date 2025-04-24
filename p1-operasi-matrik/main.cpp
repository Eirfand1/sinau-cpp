#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void rotate90(vector<vector<int>> &mat, int &N, int &M, vector<vector<int>> &temp) {
	temp.assign(M, vector<int>(N));
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			temp[j][N - 1 - i] = mat[i][j];
		}
	}
		
	swap(mat, temp);
	swap(N, M);
}

void mirror_vertical(vector<vector<int>> &mat) {
	for (auto &row : mat) {
		reverse(row.begin(), row.end());
	}
}

void mirror_horizontal(vector<vector<int>> &mat) {
	int N = mat.size();
	for (int i = 0; i < N / 2; i++){
		swap(mat[i], mat[N - 1 - i]);
	}
}

int main() {
	int N, M, O;
	cin >> N >> M >> O;

	vector<vector<int>> mat(N, vector<int>(M));
	for (int i = 0; i < N * M; i++) {
		cin >> mat[i / M][i % M];
	}

	vector<string> operasi(O);
	for (int i = 0; i < O; i++){
		cin >> operasi[i];
	}

	vector<vector<int>> temp; 

	for (const auto &op : operasi) {
		if (op == "90") {
			rotate90(mat, N, M, temp);
		} else if (op == "|") {
			mirror_vertical(mat);
		} else if (op == "_") {
			mirror_horizontal(mat);
		} else if (op == "180") {
			mirror_vertical(mat);
			mirror_horizontal(mat);
		} else if (op == "270") {
			mirror_vertical(mat);
			mirror_horizontal(mat);
			rotate90(mat, N, M, temp);
		}
	}

	for (const auto &row : mat) {
		for (int val : row) {
			cout << val << ' ';
		}
		cout << '\n';
	}
}

