#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<string> Sort(string s){
    vector<string> v;
    for(int i=0;i<s.length();i++){
        string temp="";
        temp+=s[i];
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    return v;

}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s,t;
        cin>>s;
        cin>>t;
        string s2="";
        vector<string> v=Sort(s);
        bool prvib=false;
        bool drugib=false;
         string prvi="",drugi="",treci="";
        prvi+=t[0];drugi+=t[1],treci+=t[2];
        for(int j=0;j<v.size();j++){
            if(v[j]==drugi || v[j]==treci){
                drugib=true;
            }
            if(v[j]==prvi && !drugib){
                prvib=true;
            }
            for(int z=v.size()-1;z>=j;z--){
                if(v[j]==drugi && v[z]==treci && prvib){
                    string pom=v[z];
                    v[z]=v[j];
                    v[j]=pom;
                }
            }
        }
        for(int j=0;j<v.size();j++){
            s2+=v[j];
        }
        cout<<s2<<endl;
    }
}