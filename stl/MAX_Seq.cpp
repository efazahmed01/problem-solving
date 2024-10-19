/*
You will be given a string s containing only lowercase english letters. You have to find out the lexicographically minimal longest subsequence of it.

You will be given a string s containing only lowercase english letters. You have to find out the lexicographically minimal subsequence of it.
r of the remaining elements.

A sequence A is lexicographically larger than a sequence B (of the same length), if in the first position where A and B differ, 
sequence A has a number greater than the corresponding number in B.

Input

The only line of input will contain a string s which contains only lowercase english letters.

1 <= |s| <= 105

a <= si <= z

Output

Output a single line where you will print the lexicographically minimal longest subsequence of the given string.

Example

Input

zaxbyc

Output

abc
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s; cin >> s;
    vector<int> pos[26];
    for(int i = 0; i < s.size(); i++) {
        pos[s[i] - 'a'].push_back(i);
    }
    int prev = 0;
    for(int i = 0; i < 26; i++) {
        for(auto x: pos[i]) {
            if(x < prev) continue;
            prev = x;
            cout << (char)(i + 'a');
        }
    }
    cout << "\n";
    return 0;
}    
