#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	char a[100];
	int cnt=0;
	while(n>0) {
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
