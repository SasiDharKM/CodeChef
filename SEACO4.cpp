#include <bits/stdc++.h>

using namespace std;
const int mod = 1000000007;

void MOD(int &x){if (x >= mod) x -= mod; if (x < 0) x += mod;}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> type(m+1), l(m+1), r(m+1);
		vector<int> cnt(m+2,0), dcnt(m+1,0), darr(n+1,0), arr(n+2,0);
		for(int i = 1; i <= m; i++){
			cin >> type[i] >> l[i] >> r[i];
		}
		cnt[m+1] = 1;
		for(int i=m; i>0; i--){
			cnt[i] = dcnt[i] + cnt[i+1];
			MOD(cnt[i]);
			if (type[i] == 2){
				dcnt[r[i]] += cnt[i];
				MOD(dcnt[r[i]]);
				dcnt[l[i]-1] -= cnt[i];
				MOD(dcnt[l[i]-1]);
			}
		}
		for(int i=1; i<=m;i++){
			if(type[i] == 1){
				darr[r[i]] += cnt[i];
				MOD(darr[r[i]]);
				darr[l[i] - 1] -= cnt[i];
				MOD(darr[l[i]-1]);
			}
		}
		for(int i=n;i>0;i--){
			arr[i] =arr[i+1] + darr[i];
			MOD(arr[i]);
		}

		for(int i = 1;i<=n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}