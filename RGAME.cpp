
#include <iostream>
#include <vector>

using namespace std;
const int mx = 1e5 +10, mod = 1e9+7;

int n, t;
int a[mx];
int suff[mx];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while(t--)
	{
		cin >> n;
		n++;

		for(int i = 1; i<=n; ++i)
			cin >> a[i];

		int p_o_2 = 1;
		for(int i = n; i >= 1; --i)
		{
			suff[i] = (1ll * a[i] * p_o_2) % mod;
			
			if(i < n)
				suff[i] = (suff[i+1] + suff[i]) % mod;

			p_o_2 = (p_o_2 * 2) % mod;
		}

		int ans = 0;
		p_o_2 = 1;

		for(int i = 1; i<n; ++i)
		{
			int count = (1ll * p_o_2 * a[i]) % mod;
			count = (1ll * count * suff[i+1]) %mod;

			ans = (ans + count) % mod;
			
			if(i >= 2)
				p_o_2 = (p_o_2 * 2) % mod;
		}

		cout << (2*ans) % mod << '\n';
	}

	return 0;
}
