#include <bits/stdc++.h>

using namespace std;
int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,temp;
		cin >> n;
		vector<long int> a(n);

		for(long i = 0;i<n;i++){
			cin>>a[i];
		}
		long long int min = LLONG_MAX;				
		long position=0;
		vector<long long int> pre(n),suf(n);

		pre[0] = a[0];
		for(long i = 1;i<n;i++){
			pre[i] = pre[i-1] + a[i];
		}

		suf[n-1] = a[n-1];
		for(int i =n-2; i>=0; i--){
			suf[i] = suf[i+1] + a[i];
		}
		
		long long val;
		for(int i = 0;i<n;i++){
			val = pre[i] + suf[i];
			if (val < min){
				min = val;
				position = i+1;
			}
		}

		cout<<position<<endl;
	}
	return 0;
}