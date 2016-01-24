/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior   */
    
    
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,a,b,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>n; int ar[n+1];
        ar[0]=a+(pow(2,0)*b);
        for(int i=1;i<n;i++){            
            ar[i]=ar[i-1]+(pow(2,i)*b);
        }
        for(int i=0;i<n;i++) cout<<ar[i]<<" ";
        cout<<"\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
