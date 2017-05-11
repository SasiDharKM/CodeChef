/*input
5
CES
CS
CCC
SC
ECCC
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,check;
	long long int len,i;
	char s[100000];
	
	cin>>n;
	while(n--) {
		cin>>s;
		len = strlen(s);
		check = 1;
		for( i = 0; i<len-1 && check==1; i++) {
			if(s[i]-s[i+1] > 0)
				check = 0;
		}

		if(check)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
