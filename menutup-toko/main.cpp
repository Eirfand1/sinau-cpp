#include <iostream>
using namespace std;

int main() {
  int luas[4][3] = {{225 * 335, 299 * 278, 300 * 250},
                    {215 * 394, 144 * 718, 300 * 290},
                    {200 * 400, 240 * 333, 142 * 619},
                    {314 * 298, 411 * 198, 333 * 222}};

  int harga_jual[3] = {100, 120, 150};
  int harga_total[3];
  for (int i = 0; i < 3; i++) {
    int luas_total = 0;
    for (int j = 0; j < 4; j++) {
      luas_total += luas[j][i];
    }
    harga_total[i] = luas_total * harga_jual[i];
  }

  for (int i = 0; i < 3; i++) {
    cout << harga_total[i] << endl;
  }
}
