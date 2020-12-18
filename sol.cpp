#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, k;
	cin >> n >> m >> k, ++k;
	int q[k], cnt=0;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<k; ++j) {
			cin >> q[j];
		}
		ll sum=0;
		for(int j=0; j<k-1; ++j)
			sum+=q[j];
		if(sum>=m&&q[k-1]<=10)
			cnt++;
	}
	cout << cnt << "\n";
}
