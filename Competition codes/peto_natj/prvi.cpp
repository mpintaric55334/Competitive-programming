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
        string keyboard;
        string s;
        cin>>keyboard;
        cin>>s;
        int time=0;
        int indeks1=0;
        for(int j=0;j<keyboard.length();j++){
            if(s[0]==keyboard[j]){
                indeks1=j;
                break;
            }
        }
        
        int indeks2;
        for(int j=1;j<s.length();j++){
            for(int n=0;n<keyboard.length();n++){
                if(s[j]==keyboard[n]){
                    indeks2=n;
                    break;
                }
            }
            time+=abs((ll)indeks1 - (ll)indeks2);
            indeks1=indeks2;
            indeks2=0;
        }
        cout<<time<<endl;
    }
}