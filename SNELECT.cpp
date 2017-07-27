#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
    cin >> t;
    while(t--){
    	string sm;
    	int s_cnt = 0, m_cnt = 0;
    	cin >> sm;
    	vector<int> chk(sm.length());
    	for(int i=0; i<sm.length(); i++){
    		if(sm[i]=='s'){
    			s_cnt++;
    		}
    		else if(sm[i] == 'm' && (i != 0 || i != sm.length() -1)){
    			m_cnt++;
    			if(sm[i-1] == 's' && chk[i-1] != 1){
    				chk[i-1] = 1;
    				s_cnt--;
    			}
    			else if (sm[i+1] == 's' && chk[i+1] != 1){
    				chk[i+1] = 1;
    				s_cnt--;
    			}
    		}
    		else if(sm[i] == 'm' && i == 0){
    			m_cnt++;
    			if (sm[i+1] == 's' && chk[i+1] != 1){
    				chk[i+1] = 1;
    				s_cnt--;
    			}
    		}
    		else if(sm[i] == 'm' && i == sm.length() -1){
    			m_cnt++;
    			if (sm[i-1] == 's' && chk[i-1] != 1){
    				chk[i-1] = 1;
    				s_cnt--;
    			}
    		}
    	}

    	if(m_cnt > s_cnt)
    		cout<<"mongooses"<<endl;
    	else if(m_cnt < s_cnt)
    		cout<<"snakes"<<endl;
    	else
    		cout<<"tie"<<endl;
    }
    
	return 0;
}
