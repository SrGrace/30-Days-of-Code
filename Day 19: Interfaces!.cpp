/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior  */
    
    
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
          virtual int divisorSum(int n)=0;
};

//Write your code here
class Calculator : public AdvancedArithmetic {
    
    int divisorSum(int n) {
        if (n == 1) return n;
        int sum = 1 + n;
        int p = 2;
        while (p < n) {
            if (n % p == 0) sum += p;
            p++;
        }
        return sum;
    }
    
};

int main(){
    int n;
    cin>>n;
    AdvancedArithmetic *myCalculator=new Calculator(); 
    int sum=myCalculator->divisorSum(n);
    cout<<"I implemented: AdvancedArithmetic\n"<<sum;
    return 0;
}

