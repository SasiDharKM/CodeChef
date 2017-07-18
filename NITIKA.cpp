#include <bits/stdc++.h>

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	getchar();
	while(t--){
		string name, first, mid, last;
		int count =0,last_pos =0,mid_pos =0,start_pos=0;
		getline(cin,name);
		for(int i = name.length() - 1; i>=0; i--){
			if(((name[i]==' ')&& count == 0)){
				last = name.substr(i+1);
				count++;
				last_pos=i;
			}
			else if((name[i]==' ') && count==1){
				mid= name.substr(i+1,last_pos - last.length()-2);
				count++;
				mid_pos = i;
			}
			else if(i == 0){
				if (count == 0){
					last = name.substr(i);
				}
				else if(count == 1){
					first = name.substr(i,last_pos);
				}
				else if(count==2){
					first = name.substr(i,mid_pos);
				}
			}
		}
		last[0] = toupper(last[0]);
		for(int i =1; i<last.length();i++){
			last[i]=tolower(last[i]);
		}
		if(count == 2)
			cout<<char(toupper(first[0]))<<". " <<char(toupper(mid[0]))<<". "<<last<<endl;
		else if(count == 1)
			cout<<char(toupper(first[0]))<<". "<<last<<endl;
		else if(count == 0)
			cout<<last<<endl;
	
	}
	return 0;
}
