#include <bits/stdc++.h>

using namespace std;

int Power(int a, int b) {
	int res = 1;
	while (b > 0) {
		if (b & 1) {
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// Hexadecimal -> Decimal -> Octal Process
	string s;
	cin >> s;
	int b = 1;
	int d = 0;
	for (int i = (int) s.size() - 1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '9') {
			d += (s[i] - 48) * b;
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			d += (s[i] - 55) * b;
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			d += (s[i] - 87) * b;
		}
		b *= 16;
	}
	int a[1000];
	int cnt = 0;
	while (d > 0) {
		a[cnt++] = d % 8;
		d /= 8;
	}
	for (int i = cnt - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << '\n';
	return 0;
}
