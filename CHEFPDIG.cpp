#include <bits/stdc++.h>

using namespace std;
int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >>n;
		int arr[10] ={0,0,0,0,0,0,0,0,0,0};
		for(int i =0; i<n.size();i++){
			arr[n[i] - 48]++;
		}

		for(int i=65;i<=90;i++){
			int first = i/10;
			int second = i%10;
			if (first == second){
				if(arr[first] > 1){
					cout<<char(i);
				}
			}
			else{
				if (arr[first] > 0 && arr[second] > 0){
					cout<<char(i);
				}
			}
		}
		cout<<endl;

	}
	return 0;
}