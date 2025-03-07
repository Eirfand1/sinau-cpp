#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;

	int banyaknya_vocal = 0;
	for (char c : s) {
		if (c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u') {
			banyaknya_vocal++;
		}	
	}

	cout << banyaknya_vocal << endl;
}
