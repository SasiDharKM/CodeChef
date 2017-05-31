    #include <iostream>
    #include <vector>
    using namespace std;
     
     
    int main() {
       int r,l,h_c,t_c,check;
       cin>>r;
       vector<char> v(500);
       for(int j=0;j<r;j++){
          cin>>l;
          h_c=0;
          t_c=0;
          check=0;
          for(int i=0;i<l;i++){
               cin>>v[i];     
           }
           for(int i=0; i<l;i++){
            if(v[i]=='H')
                   h_c++;
               if(v[i]=='T')
                   t_c++;
               if((t_c > h_c) || (h_c - t_c > 1)){
                   cout<<"Invalid"<<endl;
                   check=1;
                   break;
               }
           }
           if(h_c == t_c){
               cout<<"Valid"<<endl;
           }
           else if(check!=1)
               cout<<"Invalid"<<endl;
       }
     
       return 0;
    } 