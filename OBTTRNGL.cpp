#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long k,a,b;
		cin >> k >> a >> b;
		long half1 = abs(a-b) - 1, half2 = k-half1-2;
		if(half1 == half2){
			cout <<0<<endl;
		}
		else{
			cout<<min(half1,half2)<<endl;
		}
	}
	return 0;
}