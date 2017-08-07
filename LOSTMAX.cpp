#include <bits/stdc++.h>
using namespace std;
const int mx = 100;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int counter = 0, ans = 0, a[mx];
		string line;
		getline(cin ,line);
		stringstream ss;
		ss << line;
		while(ss >> a[counter++]);
		counter -= 2;
		bool check = 0;
		for(int i =0; i<=counter; i++){
			if(a[i] == counter){
				if(check)
					ans = (a[i] > ans)?a[i]:ans;
				else
					check = 1;
			}
			else
				ans = (a[i] > ans)?a[i]:ans;
		}
		cout << ans << endl;
	}
   return 0;
}