#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

int main(void){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<ll> v1;
        ll n;
        cin>>n;
        for(ll j=0;j<n;++j){
            ll pomocni;
            cin>>pomocni;
            v1.push_back(pomocni);
        }
        ll izbrisani=0;
        for(ll j=0;j<n;j++){
        
            if(v1[j]%(j+2)!=0){
                izbrisani+=1;
            }
        }
        if(izbrisani>=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
       
        
        
    }
}