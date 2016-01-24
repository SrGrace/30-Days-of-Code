/* sourav verma   IPG_2013108 
   ABV-IIITM , Gwalior  */
   

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double m; int t,x;
    cin>>m>>t>>x;
    double tp=(m*t)/100;
    double tx=(m*x)/100;
    double fn=abs(m+tp+tx);
    cout<<"The final price of the meal is $"<<round(fn)<<'.';
    
    /* Enter yom*xur code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
