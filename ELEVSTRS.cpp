#include <bits/stdc++.h>

using namespace std;
const int mod = 1000000007;

void MOD(int &x){if (x >= mod) x -= mod; if (x < 0) x += mod;}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	float r2 = 1.4142135;
	cin >> t;
	//(|2*n)/v1 :: (2*n)/v2 => n/v1 :: |2*n/v2
	while(t--){
		int n;
		float t1,t2,v1,v2;
		cin >> n >> v1 >> v2;
		t1 = n/v1;
		t2 = r2*n/v2;
		(t1<t2)?cout<<"Stairs\n":cout<<"Elevator\n";
	}
	return 0;
}