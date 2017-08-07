#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		int z_cnt = 0, seen = 0, d_cnt = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i] == 0)
				z_cnt++;
		}
		for(int i=0;i<n;i++){
			if(a[i] == 0)
				seen =1;
			if(a[i] == 1 && seen==1){
				d_cnt++;		
			}
		}
		cout << z_cnt*1100 + d_cnt*100 <<endl;
	}
   return 0;
}