#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        ll an;
        vector<ll> v1;
        vector<ll> v2;
        for(int j=0;j<n;j++){
            cin>>an;
            v1.push_back(an);
            v2.push_back(an);

        }
        int br=0;
        ll max=*min_element(v1.begin(),v1.end());
        while(v1.size()>=1){
            if(v1.size()==1){
                cout<<max<<endl;
                break;
            }else{
            
                ll min=*min_element(v1.begin(),v1.end());
                int minElementIndex = std::min_element(v1.begin(),v1.end()) - v1.begin();
                
                v2.erase(v2.begin()+minElementIndex);
                for(int j=0;j<v2.size();j++){
                    v2[j]=v2[j]-min;
                }
                ll min2=*min_element(v2.begin(),v2.end());
                v1.erase(v1.begin()+minElementIndex);
                 for(int j=0;j<v1.size();j++){
                    v1[j]=v1[j]-min;

                }
                
                if(min2>=min){
                    br+=1;
                    max=min2;

                }
                min=min2;
                
            }
            
            
        }
        

        }

        
    }
