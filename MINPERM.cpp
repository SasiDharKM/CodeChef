#include <bits/stdc++.h>

using namespace std;
int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i<n; i+=2){
			a[i] = i+2;
			a[i+1] = i+1;
		}
		if(n%2 == 1){
			a[n-1] = a[n-2];
			a[n-2] = n;
		}
		for(int i = 0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}