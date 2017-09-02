#include <bits/stdc++.h>

using namespace std;
struct cmd{
	int opt;
	int l;
	int r;
};

void fol(vector<int> &a, int l, int r){
	for(int i = l-1;i<=r-1;i++){
		a[i]++;
	}
}
void rcr(vector<cmd> &c, vector<int> &b, int l, int r){
	for(int i = l-1; i<=r-1;i++){
		if(c[i].opt == 1){
			fol(b, c[i].l, c[i].r);
		}

		else if(c[i].opt == 2){
			rcr(c,b,c[i].l,c[i].r);
		}
	}
}

int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> arr(n);
		vector<cmd> lst(m);
		for(int i = 0; i<m; i++){
			cin >> lst[i].opt >> lst[i].l >> lst[i].r;
		}
		for(int i = 0; i<m; i++){
			if(lst[i].opt == 1){
				fol(arr, lst[i].l, lst[i].r);
			}
			else if(lst[i].opt == 2){
				rcr(lst, arr, lst[i].l, lst[i].r);
			}
		}
		for(int i = 0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}