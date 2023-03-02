#include <iostream>
using namespace std;
typedef long long ll;
//kod sam nasa na internetu,pa sam besramno kopira sa ove stranice
//https://www.geeksforgeeks.org/longest-subsegment-1s-formed-changing-k-0s/

int longestSubSeg(int a[], int n, int k)
{
    int cnt0 = 0;
    int l = 0;
    int max_len = 0;
 
    // i decides current ending point
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            cnt0++;
 
        // If there are more 0's move
        // left point for current ending
        // point.
        while (cnt0 > k) {
            if (a[l] == 0)
                cnt0--;
            l++;
        }
 
        max_len = max(max_len, i - l + 1);
    }
 
    return max_len;
}
int main(void){
    int n,k;
    string s;
    cin>>n;
    cin>>k;
    cin>>s;
    int lista[n];
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            lista[i]=1;
        }else{
            lista[i]=0;
        }
    }
    cout<<longestSubSeg(lista,n,k);
}