/*   Sourav_Verma  IPG_2013108
     ABV-IIITM , Gwalior   */
     
     
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t; cin >> t;
    cin.ignore(); 
    map<string,unsigned int> contacts;
 
    while(t--) {
        string name,temp; 
        getline(cin,name);
        unsigned int n;
        getline(cin,temp);
        stringstream convert(temp);
        if (!(convert >> n)) n = 0; 
        contacts[name] = n; 
    }
    string q;
    while(getline(cin,q)) {
        if (contacts.find(q) != contacts.end())
            cout << q << "=" << contacts[q] << endl;
        else cout << "Not found" << endl;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
