#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double bal;
	int amt;
	cin >> amt >> bal;
	cout << fixed;
	if(amt % 5 == 0 && bal - amt > 0.50)
		cout <<setprecision(2)<< (bal - amt)- 0.50;
	else 
		cout << setprecision(2) << bal;
    
	return 0;
}