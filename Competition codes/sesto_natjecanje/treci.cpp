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
        int duljina=0,n;
        bool found=false;
        bool a2=false;
        string s;
        
        cin>>n;
        cin>>s;
        s+='d';
        int br_a=0;
        int br_b=0;
        int br_c=0;
        int min=10e6;
        for(int j=0;j<n;j++){
            //2a zaredom
            if(s[j]=='a' && s[j+1]=='a'){
                cout<<2<<endl;
                a2=true;
                found=true;
                break;
            }else if(s[j]=='a' && s[j+1]!='a'){
                duljina+=1;
                br_a+=1;
            }else if(s[j]=='b'){
                duljina+=1;
                br_b+=1;
            }else if(s[j]=='c'){
                duljina+=1;
                br_c+=1;
            
            }
            
            if(br_b>br_a && br_c>br_a && br_b>0 && br_c>0){
                duljina=0;
                br_a=0;
                br_b=0;
                br_c=0;
            }
            
            if(br_a>br_b && br_a>br_c && duljina>=2){
                found=true;
                if(duljina<min){
                    min=duljina;
                    
                }
                duljina=0;
                br_a=0;
                br_b=0;
                br_c=0;
            }
            
        }
        if(!found){
            cout<<-1<<endl;
        }else if(!a2){
            cout<<min<<endl;
        }
    }
}