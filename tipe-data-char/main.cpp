#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit "
             "dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros "
             "accumsan duis ullamcorper hac odio imperdiet.";

  int total_vokal = 0;

  for (int i = 0; i < s.size(); i++) {
    char c = s[i];
    char v[5] = {'a', 'i', 'u', 'e', 'o'};
    string arr = v;
    if (arr.find(c) != string::npos) {
      total_vokal++;
    }
  }

  cout << total_vokal << endl;
}
