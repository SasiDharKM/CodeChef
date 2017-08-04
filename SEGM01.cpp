#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int see1 = 0 , saw0 = 0 ,saw1=0;
		for(int i = 0; i<s.size(); i++){
			if(s[i] == '1' && saw1 == 0){
				saw1 = 1;
			}
			if(s[i] == '0' && saw1 == 1){
				saw0 = 1;
			}
			if(s[i] == '1' && saw0 == 1){
				see1 =1;
				break;
			}

		}
		(see1 == 1 || saw1 == 0)?cout<<"NO"<<endl:cout<<"YES"<<endl;
	}
    
	return 0;
}