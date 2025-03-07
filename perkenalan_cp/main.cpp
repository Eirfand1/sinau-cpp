#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> data;
	int total = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		data.push_back(x);
	}

	for (int i = 0; i < n; i++ ) {
		total += data[i];	
	}

	for (int i = 0; i < n; i++){
		int cur = total - data[i];
		cout << cur << endl;
	}
}
