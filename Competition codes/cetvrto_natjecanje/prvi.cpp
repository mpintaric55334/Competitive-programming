#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int> v;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int pomocni;
            cin>>pomocni;
            v.push_back(pomocni);
        }
        int br=0;
        vector<int> v2;
        for(int n=1;n<=v.size();n++){
            if(v[n-1]>n){
                v2.push_back(v[n-1]-n);
                
            }
        }
       
        if(v2.size()!=0){
            int max=*max_element(v2.begin(),v2.end());
            cout<<max<<endl;
        }else{
            cout<<0<<endl;
        }
        

    }
}