#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 4; i++) {
    if (i % 2 == 0) {
      continue;
    }
    for (int j = 1; j <= i; j++) {
      if ((i + j) % 2 == 0) {
        cout << "*";
      }
    }
  }
}
