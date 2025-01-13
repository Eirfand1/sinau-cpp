#include <iostream>
using namespace std;

int main() {
  int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
  int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};

  int N = 10;
  int jumlah_bebek = 0;
  for (int i = 0; i < N; i++) {
    jumlah_bebek += beli[i];
    jumlah_bebek -= jual[i];

    cout << jumlah_bebek << endl;
  }
}
