#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

//ideju i dosta koda sam besramno posudio sa linka
//https://www.geeksforgeeks.org/iterative-segment-tree-range-maximum-query-with-node-update/
void construct_segment_tree(vector<string>& segtree,
                            vector<string>& a, int n)
{

    for (int i = 0; i < n; i++)
        segtree[n + i] = a[i];
 
    
    for (int i = n - 1; i >= 1; i--)
        segtree[i] = max(segtree[2 * i],
                         segtree[2 * i + 1]);
}
void update(vector<string>& segtree, int pos, string value,
            int n)
{
    
    pos += n;
 
    
    segtree[pos] = value;
 
    while (pos > 1) {
 
        
        pos >>= 1;
 
        
        segtree[pos] = max(segtree[2 * pos],
                           segtree[2 * pos + 1]);
    }
}
string range_query(vector<string>& segtree, int left, int right, int n)
{
   
    left += n;
    right += n;
 
    
    string ma = "";
    
 
    while (left < right) {
 
        
        if (left & 1) {
            ma = max(ma, segtree[left]);
           
            
            left++;
        }
 
        
        if (right & 1) {
 
            
            right--;

            ma = max(ma, segtree[right]);
            
        }
 
        
        left /= 2;
        right /= 2;
    }
    return ma;
}
int main(void){
    int n;
    cin>>n;
    string s;
    string novi="";
    int broj;
    vector<string> v;
    for(int i=0;i<n;i++){
        cin>>broj;
        cin>>s;
        broj+=10000;
        novi+=to_string(broj);
        novi+=s;
        v.push_back(novi);
        novi="";
        
    }
    vector<string> segtree(2 * n);
    construct_segment_tree(segtree, v, n);
    int q;
    
    cin>>q;
    for(int m=0;m<q;m++){
        string maks="";
        string type;
        int l,r;
        cin>> type;
        cin>>l;
        cin>>r;
        if(type=="q"){
            string num3="";
            string dio="";
            maks=range_query(segtree, l-1,r ,n);
            for(int z=0;z<maks.length();z++){
                if(isdigit(maks[z]) && z<6){
                    num3+=maks[z];
                }else{
                    dio+=maks[z];
                }
            }

            cout<<dio<<endl;
            num3="";
            dio="";
            
        }else{
            string value=v[l-1];
            string num="";
            string dio2="";
            for(int z=0;z<value.length();z++){
                if(isdigit(value[z]) && z<6){
                    num+=value[z];
                }else{
                    dio2+=value[z];
                }
            }
            
            int numero=stoi(num);
            numero+=r;
            string num2=to_string(numero);
            value="";
            value=num2+dio2;
            num2="";
            dio2="";
            v[l-1]=value;
            update(segtree, l-1, value, n);
        }


    }
}