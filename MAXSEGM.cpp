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
		for(int i = 0; i<n; i++){
			for( int j =0; j<n;j++){
				seen[j] = 0;
			}
			curr_sum =0;
			for (int k = i; k<n; k++){
				if(seen[c[k]] == 1)
					break;
				curr_sum += w[k];
				res = (curr_sum > res)?curr_sum:res;
				seen[c[k]] = 1;
			}
		}
		cout<<res<<endl;
	}
    
	return 0;
}