#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        ll a1,a2,a3;
        cin>>a1>>a2>>a3;
        ll sum=a1+a3;
        ll a23=2*a2;
        ll difference=abs(sum-a23);
        difference=difference%3;
        if(difference==0 || difference ==1){
            cout<<difference<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}