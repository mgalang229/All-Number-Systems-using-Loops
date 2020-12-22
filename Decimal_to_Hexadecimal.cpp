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
	char a[1000];
	int cnt = 0;
	while (n > 0) {
		int tmp = n % 16;
		if (tmp < 10) {
			a[cnt++] = 48 + tmp;
		} else {
			a[cnt++] = 55 + tmp;
		}
		n /= 16;
	}
	for (int i = cnt - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << '\n';
	return 0;
}
