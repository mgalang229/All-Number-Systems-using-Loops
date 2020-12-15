#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int power(int a, int b) {
	int res=1;
	while(b) {
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
	
	//binary->decimal->hexadecimal process
	ll n;
	cin >> n;
	int d=0, rem=0;
	for(int i=0; n!=0; ++i) {
		rem=n%10;
		n/=10;
		d+=rem*power(2, i);
	}
	char a[1000];
	int cnt=0;
	while(d) {
		int tmp=d%16;
		if(tmp<10)
			a[cnt++]=48+tmp;
		else
			a[cnt++]=55+tmp;
		d/=16;
	}
	for(int i=cnt-1; i>=0; --i)
		cout << a[i];
	cout << "\n";
}
