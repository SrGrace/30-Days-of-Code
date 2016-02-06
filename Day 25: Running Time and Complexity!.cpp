   /* sourav verma IPG_2013108
       ABV-IIITM,Gwalior  */
       
       
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t; cin>>t;
    while(t--){
        int n,cnt=0; cin>>n;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cnt++; break;
            }
        }
        if(n==1 || cnt!=0) cout<<"Not prime"<<"\n";
        else   cout<<"Prime\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
