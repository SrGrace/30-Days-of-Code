/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior  */
    
    
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;


class Palindrome {
    //Write your code here
    
    stack<char>s;
    queue<char>q;
    
    public:
    
        void pushCharacter(char& c) {
            this->s.push(c);
        }
    
        void enqueueCharacter(char& c) {
            this->q.push(c);
        }
    
        char popCharacter() {
            auto c = this->s.top();
            
            this->s.pop();
            
            return c;
        }
    
        char dequeueCharacter() {
            auto c = this->q.front();
            
            this->q.pop();
            
            return c;
        }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Palindrome class object p.
    Palindrome p;
    
    // push all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        p.pushCharacter(s[i]);
    }
    
    // enqueue all the characters of string s to queue.
    for (int i = 0; i < s.length(); i++) {
        p.enqueueCharacter(s[i]);
    }
    
    bool f = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length(); i++) {
        if (p.popCharacter() != p.dequeueCharacter()) {
            f = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (f) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}

