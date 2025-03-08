#include <cmath>
#include <iostream>
using namespace std;

int main(){
	long long N;
	cin >> N;

	long long r_terbaik = 1;
	long long c_terbaik = N;

	for(int r = sqrtl(N); r >= 1; r--){
		if(N % r == 0) {
			long long c = N / r;
			if(r <= c) {
				if (c - r < (c_terbaik - r_terbaik)) {
					r_terbaik = r;	
					c_terbaik = c;
					break;
				}
			}
		}
	}

	cout << r_terbaik << " " << c_terbaik;
}
