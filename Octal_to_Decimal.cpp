#include <bits/stdc++.h>

using namespace std;

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
