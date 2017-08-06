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
		for(int i =0;i<2*n;i++){
			int p;
			cin >> p;
		}
		int ans = 0;
		for(int i =1; i<=n; i++)
			ans = ans xor i;
		cout<<ans<<endl;
 
	}
	return 0;
} 