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
	
	//hexadecimal->decimal->octal process
	string s;
	cin >> s;
	int b=1, d=0;
	for(int i=(int)s.size()-1; i>=0; --i) {
		if(s[i]>='0'&&s[i]<='9')
			d+=(s[i]-48)*b;
		else if(s[i]>='A'&&s[i]<='F')
			d+=(s[i]-55)*b;
		else if(s[i]>='a'&&s[i]<='f')
			d+=(s[i]-87)*b;
		b*=16;
	}
	int a[1000], cnt=0;
	while(d>0) {
		a[cnt++]=d%8;
		d/=8;
	}
	for(int i=cnt-1; i>=0; --i)
		cout << a[i];
	cout << "\n";
}
