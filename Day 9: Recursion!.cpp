/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior   */
    
    
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find_gcd(int a,int b){
    //Write base condition
    if(b==0) return a;
    return find_gcd(b,a%b);
}
int main() {
    int a,b; cin>>a>>b;
    //Take input
    int gcd=find_gcd(a,b);
    cout<<gcd;
    return 0;   
}
