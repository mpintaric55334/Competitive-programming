#include <iostream>
using namespace std;
typedef string str;

int main(void){
    int a=0;
    str str;
    int n;
    cin>>n;
    cin>>str;
    int k=0;
    while(k<str.size()){
    
        if(str[k]==str[k+1]){
            str.erase(k+1,1);

            a+=1;
        }else{
            k+=1;
            if(k==str.size()-1){
                break;
            }
            
        }
    }
    cout<<a;

}