#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    int n;
    cin>>n;
    ll suma=0;
    //punjenje
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ll elem;
            cin>>elem;
            suma+=elem;
        }
    }

    cout<<suma;

}