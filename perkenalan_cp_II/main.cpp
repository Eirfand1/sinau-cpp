#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> data;
	long total = 0;
	for (int i = 0; i < n; i++) {
		long x;
		cin >> x;
		data.push_back(x);
	}

	for (int i = 0; i < n; i++ ) {
		total += data[i];	
	}

	for (int i = 0; i < n; i++){
		long cur = total - data[i];
		cout << cur << endl;
	}
}


