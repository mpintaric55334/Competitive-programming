#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector <int> v;
        int duljina=0;
        int br_a=0;
        int br_b=0;
        int br_c=0;
        int n;
        string s;
        cin>>n;
        cin>>s;
        bool pushali=false;
        for(int j=0;j<n;j++){
            if(s[j]=='a'){
                if(br_a==0){
                    duljina=0;
                    br_c=0;
                    br_b=0;
                }
                br_a+=1;
                duljina+=1;
                if(br_a>br_b && br_a>br_c && duljina>=2){
                     v.push_back(duljina);
                     pushali=true;
                     br_a=1;
                     duljina=1;
                     br_b=0;
                     br_c=0;
                 }
            }else if(s[j]=='b'){
                br_b+=1;
                duljina+=1;
            }else if(s[j]=='c'){
                br_c+=1;
                duljina+=1;
            }
        }
        
        if(pushali){
            int min=*min_element(v.begin(),v.end());
            cout<<min<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
}