#include <bits/stdc++.h>

using namespace std;
long int MOD = 10e9 + 7;

vector<long> addArr(vector<long> &a, vector<long> &b,int n){
	for(int i =0; i<n;i++){
		a[i] += b[i];
		a[i] %= MOD;
	}
	return a;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m,t,l,r;
		cin >> n >> m;
		vector<long> arr(n,0);
		map< int,vector<long> > my;
		for(int i = 0; i<m; i++){
			cin >> t >> l >> r;
			vector<long> temp(n,0);
			if (t==1){
				for(int i = l-1; i<=r-1; i++){
					temp[i]++;
					temp[i]%= MOD;
				}
			}
			else{
				for(int j =l-1; j<=r-1; j++){
					temp = addArr(temp, my[j] , n);
				}
			}

			arr = addArr(arr,temp,n);
			my[i] = temp;
		}
		for(int i = 0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}