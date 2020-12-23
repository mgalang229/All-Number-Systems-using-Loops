#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int n;
	cin >> n;
	int a[1000], cnt=0;
	while(n) {
		a[cnt++]=n%2;
		n/=2;
	}
	for(int i=cnt-1; i>=0; --i)
		cout << a[i];
	cout << "\n";
}
