#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x;
    cin >> x;
    int terbesar = x, terkecil = x; 

    for (int i = 1; i < N; i++) { 
        cin >> x;
        if (x < terkecil) terkecil = x;
        if (x > terbesar) terbesar = x;
    }

    cout << terbesar << " " << terkecil << endl;
}

