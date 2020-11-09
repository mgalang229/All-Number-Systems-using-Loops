#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int power(int a, int b) {
	int res=1;
	while(b>0) {
		if(b&1)
			res*=a;
		a*=a;
		b/=2;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin >> n;
	int d=0, rem=0;
	for(int i=0; n!=0; ++i) {
		rem=n%10;
		n/=10;
		d+=rem*power(2, i);
	}
	cout << d << "\n";
}
