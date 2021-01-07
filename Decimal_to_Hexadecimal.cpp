#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	char a[1000];
	int cnt = 0;
	while (n > 0) {
		int tmp = n % 16;
		if (tmp < 10) {
			a[cnt++] = tmp + 48;
		} else {
			a[cnt++] = tmp + 55;
		}
		n /= 16;
	}
	for (int i = cnt - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << '\n';
	return 0;
}
