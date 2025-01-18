#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "thequickbrownfoxjumpsoverthelazydog";

  for (char c : s) {
    char upper = toupper(c);
    if (upper == 'Z') {
      upper = 'A';
    } else {
      upper += 1;
    }
    cout << upper;
  }
  cout << endl;
}
