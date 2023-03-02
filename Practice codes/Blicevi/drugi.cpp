#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

//ideju i dosta koda sam besramno posudio sa linka
//https://www.geeksforgeeks.org/iterative-segment-tree-range-maximum-query-with-node-update/
void construct_segment_tree(vector<int>& segtree,
                            vector<int>& a, int n)
{
    for (int i = 0; i < n; i++)
        segtree[n + i] = a[i];
 
    
    for (int i = n - 1; i >= 1; i--)
        segtree[i] = max(segtree[2 * i],
                         segtree[2 * i + 1]);
}
void update(vector<int>& segtree, int pos, int value,
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
int range_query(vector<int>& segtree, int left, int right, int n)
{
   
    left += n;
    right += n;
 
    
    int ma = 0;
    
 
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
    int broj;
    pair<int,string> p;
    vector<pair<int,string>> v;
    vector<int> v2;
    for(int i=0;i<n;i++){
        cin>>broj;
        cin>>s;
        p.first=broj;
        p.second=s;
        v.push_back(p);
        v2.push_back(broj);
    }
    vector<int> segtree(2 * n);
    construct_segment_tree(segtree, v2, n);
    int q;
    
    cin>>q;
    for(int m=0;m<q;m++){
        int maks=0;
        string type;
        int l,r;
        cin>> type;
        cin>>l;
        cin>>r;
        if(type=="q"){
            maks=range_query(segtree, l-1,r , n);
            for(int j=l-1;j<r;j++){
                if(v2[j]==maks){
                    cout<<v[j].second<<endl;
                    break;
                }
            }
        }else{
            int value=v2[l-1]+r;
            v2[l-1]=value;
            update(segtree, l-1, value, n);
        }

    }
}