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
        int n;
        string s;
        cin>>n;
        cin>>s;
        string s1="aa";
        string s2="aba";
        string s3="aca";
        string s4="abca";
        string s5="acba";
        int duljina=0;
        if(s.find(s1)!=string::npos){
            cout<<2<<endl;
        }else if(s.find(s2)!=string::npos){
            cout<<3<<endl;
        }else if(s.find(s3)!=string::npos){
            cout<<3<<endl;
        }else if(s.find(s4)!=string::npos){
            cout<<4<<endl;
        }else if(s.find(s5)!=string::npos){
            cout<<4<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}