/*input
2
3
0 1 1
3
0 1 2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	long long int lar, len, n, i, count;
	int a[100000];
	cin>>cases;

	while(cases--) {
		cin>>n;
		for(i=0; i<n; i++) {
			cin>>a[i];
		} 
		lar = 0;
	    count = 0;
		for(i=n-1; i>=lar ; i--,count++) {
			if(a[i]>lar)
				lar = a[i];
		}

		cout<<count<<"\n";
	}
	return 0;
}
