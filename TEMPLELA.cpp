#include <iostream>
#include <vector>
using namespace std;
 
 
int main() {
    int S,n,check;
    cin>>S;
    for(int i=0;i<S;i++){
        cin>>n;
        vector<int> h(n);
        for(int j=0;j<n;j++){
            cin>>h[j];
        }
        check=0;
        if(n%2==0){
            cout<<"no"<<endl;
            check=1;
        }
        else if(h[0]!=1 || h[n-1]!=1){
            cout<<"no"<<endl;
            check=1;
        }
        else if(h[n/2]!=(n/2+1)){
            cout<<"no"<<endl;
            check=1;
        }
        else if(check==0){
            for(int j=0;j<n/2;j++){
                if(h[j] != (j+1) || h[n-1-j]!=(j+1)){
                    cout<<"no"<<endl;
                    check=1;
                    break;
                }
            }
        }
        if(check==0){
            cout<<"yes"<<endl;
        }