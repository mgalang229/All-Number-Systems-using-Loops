#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[1000];
	int cnt = 0;
	while (n > 0) {
		a[cnt++] = n % 8;
		n /= 8;
	}
	for (int i = cnt - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << '\n';
	return 0;	
}
