//O(mn) solution

#include <bits/stdc++.h>

using namespace std;
long long int MOD = 1000000007;

int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> type(m), l(m), r(m);
		vector<long long> cnt(m,1), arr(n,0);
		for(int i = 0; i < m; i++){
			cin >> type[i] >> l[i] >> r[i];
		}
		for(int i = m-1; i>=0; i--){
			if(type[i] == 2){
				for(int j = l[i]-1; j<=r[i]-1; j++){
					cnt[j]+= cnt[i];
				}
			}
		}

		for(int i=0; i<m;i++){
			if(type[i] == 1){
				for(int j=l[i]-1; j<=r[i]-1; j++){
					arr[j]+=cnt[i];
				}
			}
		}
		for(int i = 0;i<n;i++){
			cout<<arr[i] % MOD<<" ";
		}
		cout<<endl;
	}
	return 0;
}