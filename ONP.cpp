#include <bits/stdc++.h>
 
using namespace std;
stack<char> stk;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = 0; i< s.length();i++){
			if(s[i] == '('||s[i] == '+'||s[i] == '-'||s[i] == '*'||s[i] == '/'||s[i] == '^')
				stk.push(s[i]);
			else if (s[i] == ')'){
				while(stk.top() != '('){
					cout << stk.top();
					stk.pop();
				}
				stk.pop();
			}
			else
				cout << s[i];
		}
		cout<<endl;
	}
	return 0;
} 