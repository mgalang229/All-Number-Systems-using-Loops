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
	// octal > decimal > hexadecimal process
	int n;
	cin >> n;
	int d = 0;
	int rem = 0;
	for (int i = 0; n != 0; i++) {
		rem = n % 10;
		n /= 10;
		d += rem * Power(8, i);
	}
	char a[1000];
	int cnt = 0;
	while (d > 0) {
		int tmp = d % 16;
		if (tmp < 10) {
			a[cnt++] = tmp + 48;
		} else {
			a[cnt++] = tmp + 55;
		}
		d /= 16;
	}
	for (int i = cnt - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << '\n';
	return 0;
}
