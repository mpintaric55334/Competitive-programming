#include <iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string ulazni;
        cin>>ulazni;
        char najmanji=ulazni[0];
        int index=0;
        for(int j=0;j<ulazni.length();j++){
            if(ulazni[j]<najmanji){
                najmanji=ulazni[j];
                index=j;
            }
        }
        string b="";
        for(int j=0;j<ulazni.length();j++){
            if(j!=index){
                b+=ulazni[j];
            }
        }
        cout<<najmanji<<" "<<b<<endl;       
    }
    
}