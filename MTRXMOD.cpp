#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, q, p, temp, ai, aip;
	cin >> n >> q;
	int b[n][n];
	vector<int> a(n,0);
	//input
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> b[i][j];
		}
	}
	//first processing
	for(int i=0;i<n;i++){
		if(b[0][i] != 0){
			a[i] = -1 * b[0][i];
			ai = a[i];
			aip = i;
			break;
		}
	}
	for(int i=aip+1;i<n;i++){
		if(abs(ai - b[0][i]) == b[aip][i])
			a[i] = b[0][i];
		else
			a[i] = -1*b[0][i];
	}
	for(int i =0; i<n;i++)
		cout<<a[i]<<" ";
	cout <<endl;
	for(int k=0;k<q;k++){
		cin >> p;
		for(int l=0;l<n;l++){
			cin >> temp;
			b[p-1][l] = temp;
			b[l][p-1] = temp;
		}		
		vector<int> a(n,0);

		for(int i=0;i<n;i++){
			if(b[0][i] != 0){
				a[i] = -1 * b[0][i];
				ai = a[i];
				aip = i;
				break;
			}
		}
		for(int i=aip+1;i<n;i++){
			if(abs(ai - b[0][i]) == b[aip][i])
				a[i] = b[0][i];
			else
				a[i] = -1*b[0][i];
		}
		for(int i =0; i<n;i++)
			cout<<a[i]<<" ";
		cout <<endl;
	}
	return 0;
}