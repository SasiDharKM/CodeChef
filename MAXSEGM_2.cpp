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
		vector<long long> c(n) ,w(n);
		vector<int> seen(n);
		for(int i = 0; i<n; i++){
			cin >> c[i];
		}
		for(int i = 0; i<n; i++){
			cin >> w[i];
		}
		long long res =0, curr_sum =0;
		int i =0, j =0;
		for(int k =0;k<n;k++)
			seen[k] = 0;
		while(true){
			while (j<n && seen[c[j]] == 0){
				curr_sum += w[j];
				seen[c[j]] = 1;
				j++;
			}
			res = (res < curr_sum)?curr_sum:res;
			if(j==n)
				break;
			while(seen[c[j]] == 1){
				seen[c[i]] = 0;
				curr_sum -= w[i];
				i++;
			}
		}
		cout<<res<<endl;
	}
    
	return 0;
}