#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

int main(void){
    int n,q;
    cin>>n;
    cin>>q;
    vector<pair<int,int>> v;
    ll cijena;
    ll doprinos;
    for(int i=0;i<n;i++){
        cin>>cijena;
        cin>>doprinos;
        v.push_back(make_pair(cijena,doprinos));
    }
    sort(v.begin(),v.end());
    ll max_cijena=0;
    ll trenutacni_doprinos=0;
    ll trazeni_doprinos;
    for(int i=0;i<q;i++){
        cin>>trazeni_doprinos;
        trenutacni_doprinos=0;
        max_cijena=0;
        int j=n-1;
        while(trenutacni_doprinos<trazeni_doprinos && j>=0){
            ll doprinos=v[j].second;
            ll cijena=v[j].first;
            trenutacni_doprinos+=doprinos;
            max_cijena=cijena;
            j--;
        }
        if(trenutacni_doprinos>=trazeni_doprinos){
            cout<<max_cijena<<endl;;
        }else{
            cout<<-1<<endl;
        }

    }
    
    
}