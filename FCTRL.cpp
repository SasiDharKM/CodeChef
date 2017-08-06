#include <bits/stdc++.h>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		int sum = 0;
		int fact = 5;
		while(n/fact != 0){
			sum += (n/fact);
			fact *= 5;
		}
		cout<<sum<<endl;
	}
	return 0;
}