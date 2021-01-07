#include <bits/stdc++.h>

using namespace std;

int Power(int a, int b) {
	int res = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	int d = 0;
	int rem = 0;
	for (int i = 0; n != 0; i++) {
		rem = n % 10;
		n /= 10;
		d += rem * Power(8, i);
	}
	cout << d << '\n';
	return 0;
}
