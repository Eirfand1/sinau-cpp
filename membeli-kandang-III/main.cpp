#include <iostream>
using namespace std;

int main() {
  int luas_kandang = 12;

  // Menyatakan sudah berapa bulan (berapa kali) Pak Dengklek
  // membeli kandang baru.
  int total_bulan = 0;

  // Menyatakan total luas kandang yang dimiliki Pak Dengklek.
  // Pada mulanya, totalnya adalah luas kandang lama Pak Dengklek.
  int total_luas_kandang = luas_kandang;

  while (total_bulan < 10) {
    luas_kandang += 7;
    total_luas_kandang += luas_kandang;

    total_bulan += 1;
  }

  cout << total_luas_kandang << endl;
}
