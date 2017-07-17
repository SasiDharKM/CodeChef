#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
int t;
cin >> t ;
while(t--)
{
int a,b,n,ans;
cin >> a >> b >> n;
n = n % 6;
switch(n)
{
case 0 : ans = a - b; break;
case 1 : ans = a; break;
case 2 : ans = b; break;
case 3 : ans = b-a; break;
case 4 : ans = -a; break;
case 5 : ans = -b; break;
}
 
ans = ans % 1000000007;
if(ans < 0)
ans += 1000000007;
 
cout << ans << endl;
 
}
return 0;
} 	