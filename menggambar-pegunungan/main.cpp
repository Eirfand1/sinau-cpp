#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

vector<string> draw_mountain(int N) {
	if(N == 1) {
		return {"*"};
	}

	vector<string> prev_mountain = draw_mountain(N-1);

	vector<string> mountain;

	mountain.insert(mountain.end(), prev_mountain.begin(), prev_mountain.end());

	mountain.push_back(string(N, '*'));

	mountain.insert(mountain.end(), prev_mountain.begin(), prev_mountain.end());

	return mountain;
}

int main(){
	int N;

	cin >> N;

	vector<string> mountain = draw_mountain(N); 

	for (const string& line : mountain) {
		cout << line << endl;
	}
}


