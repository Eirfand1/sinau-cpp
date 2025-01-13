#include <iostream>
using namespace std;

int main() {
  int N = 10;
  int A = N;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (j == i || j == A) {
        cout << "*";
      } else {
        cout << ".";
      }
    }
    cout << endl;
    A -= 1;
  }
}
