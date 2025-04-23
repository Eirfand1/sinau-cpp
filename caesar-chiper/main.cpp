#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	int k;

	cin >> k;
	cin.ignore();
	getline(cin, text);


	for(int a = 1; a <= k; a++){
		string hasil = "";
		for (int i = 0; i < text.length(); i++) {

			char curr = text[i];

			if (isalpha(curr)) {
				char base = isupper(curr) ? 'A' : 'a';
				char shifted = ((curr - base - a) % 26 + 26) % 26 + base;
				hasil.push_back(shifted);
			} else {
				hasil.push_back(curr); 
			}
		}

		cout << "hasil ke-" << a << " " << hasil << endl;
		hasil = "";
	}

	return 0;
}
