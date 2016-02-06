/*   Sourav verma IPG_2013108
     ABV-IIITM,Gwalior   */
     
     
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t; cin>>t;
    while(t--){
        string s,r; cin>>s; int flag=0;
    	int len=s.length();
        for(int i=0;i<len-2;i++){
            if(abs((s[i+1]-s[i]))!=abs(s[len-(i+1)]-s[len-(i+2)])){
                flag=1;
                break;
            }
        }
 
        if(!flag) cout<<"Funny\n";
        else cout<<"Not Funny\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
