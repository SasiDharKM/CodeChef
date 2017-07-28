#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin>>s;
		int cnt = (s[0] == 'U')?1:2;
		int u_cnt = 0, d_cnt = 0;
		(cnt == 1)?u_cnt++:d_cnt++;
		for(int i=1; i<s.length();i++){
			if(s[i] == 'U' && cnt == 2){
				u_cnt++;
				cnt = 1;
				
			}
			else if(s[i] == 'D' && cnt == 1){
				d_cnt++;
				cnt=2;
			}
		}
		(d_cnt < u_cnt)?cout<<d_cnt<<endl:cout<<u_cnt<<endl;
		
	}
    
	return 0;
}