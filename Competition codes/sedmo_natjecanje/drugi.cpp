#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
 
// Function to return gcd of a and b

 
vector<int> printDivisors(int n)
{
    vector<int> v;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                v.push_back(i);
  
            else // Otherwise print both
                
                v.push_back(i);
                v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}

int main(void){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> v=printDivisors(n);
        int a,b,c,j,pom;
        for(j=0;j<v.size();j++){
            c=v[j];
           
            int br_kolko=n/c;
            if(br_kolko>=6 && br_kolko%2==0){
            
                a=(br_kolko/2)*c;
                b=(br_kolko/2-1)*c;
                
                if(gcd(a,b)==c){
                    cout<<a<<" "<<b<<" "<<c<<endl;
                    break;
                }
                
            }else if(br_kolko>=9 && br_kolko%2==1){
                a=(br_kolko/2+1)*c;
                b=(br_kolko/2-1)*c;
                if(gcd(a,b)==c){
                    cout<<a<<" "<<b<<" "<<c<<endl;
                    break;
                }
            }
            
            

        }
    }
}