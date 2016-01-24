/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior   */
    
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void binary(int n){
    if (n/2!=0) {
        binary(n/2);
    }
    printf("%d",n%2);
}


int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        /*long long rem,sum=0,i=1;
        while(n!=0){
            rem=n%2;
            n/=2;
            sum+=(i*rem);
            
            i*=10;
        } */
        
        binary(n); cout<<"\n";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
