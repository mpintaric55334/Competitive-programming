#include <iostream>
using namespace std;
int check(string s){
    int ab=0;
    int ba=0;
    for(int i=0;i<=s.length()-1;i++){
        string s1="";
        string s2="";
        s1+=s[i];
        s2+=s[i+1];
        if(s1=="a" && s2=="b"){
            ab+=1;
           
        }
        if(s1=="b" && s2=="a"){
            ba+=1;
            
        }
        
    }
    if(ab>ba){
            return 1;
        }else if(ab<ba){
            return 2;
        }else{
            return 3;
    }
    
}

int main(void){
    int t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        string copys1=s;
        string copys2=s;
        while(check(s)!=3){
            string prvi="";
            string zadnji="";
            prvi+=s[0];
            zadnji+=s[s.length()-1];
            if(prvi=="a"){
                copys1.replace(0,1,"b");
            }else{
                copys1.replace(0,1,"a");
            }

            if(zadnji=="a"){
                copys2.replace(0,1,"b");
            }else{
                copys2.replace(0,1,"a");
            }

            if(check(copys1)==3){
                s=copys1;
                break;
            }
            if(check(copys2)==3){
                s=copys2;
                break;
            }

        }
        cout<<s<<endl;
    }
    
}