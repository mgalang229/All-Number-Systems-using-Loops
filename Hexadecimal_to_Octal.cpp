#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//Hexadecimal->Decimal->Octal Process
	string s;
	cin >> s;
	int b=1, d=0;
	for(int i=(int)s.size()-1; i>=0; --i) {
		if(s[i]>='0'&&s[i]<='9') {
			d+=(s[i]-48)*b;
			b*=16;
		} else if(s[i]>='A'&&s[i]<='F') {
			d+=(s[i]-55)*b;
			b*=16;
		} else if(s[i]>='a'&&s[i]<='f') {
			d+=(s[i]-87)*b;
			b*=16;
		}
	}
	int a[100], cnt=0;
	while(d>0) {
		a[cnt++]=d%8;
		d/=8;
	}
	for(int i=cnt-1; i>=0; --i)
		cout << a[i];
	cout << "\n";
}
