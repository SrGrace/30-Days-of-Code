/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior  */
    
    
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin>>n;
    long long a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int mini=1000000009;
    for(int i=0;i<(n-1);i++){
        int ab=abs(a[i]-a[i+1]);
        if(ab<mini)  mini=ab;
    }
    for(int i=0;i<(n-1);i++){
        int ab=abs(a[i]-a[i+1]);
        if(ab==mini){
            cout<<a[i]<<" "<<a[i+1]<<" ";
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
