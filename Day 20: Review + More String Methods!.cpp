/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior  */
    
    
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool punct(char& c) {
    return ispunct(c);
}
int main() {
    string s;
    getline(cin,s);
    
    replace_if(s.begin(),s.end(), punct ,' ');
    
    vector<string> tokens;
    stringstream _stream(s);
    
    while(_stream) {
        string _s;
        _stream >> _s;
        
        tokens.push_back(_s);
    }
    
    cout << tokens.size() - 1;
    for (auto& x : tokens) {
        cout << "\n";
        cout << x;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    return 0;
}

