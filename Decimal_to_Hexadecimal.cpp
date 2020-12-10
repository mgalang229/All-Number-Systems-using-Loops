#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	char a[1000];
	int cnt=0;
	while(n) {
		int tmp=n%16;
		if(tmp<10)
			a[cnt++]=48+tmp;
		else
			a[cnt++]=55+tmp;
		n/=16;
	}	
	for(int i=cnt-1; i>=0; --i)
		cout << a[i];
	cout << "\n";
}
