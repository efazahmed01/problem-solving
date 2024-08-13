/*
Anagrams are words or phrases that are formed by rearranging
the letters of another word or phrase, using all the original
letters exactly once. The resulting words or phrases must be
meaningful. Anagrams are often used as a form of wordplay or puzzles.

Examples:
"listen" and "silent" are anagrams of each other.
"evil" and "vile" are also anagrams.
"dusty" and "study" are anagrams.


*/


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    string s;
    cin >> s;
    
    string t;
    cin >> t;
    
    sort(s.begin(),s.end());
    
    sort(t.begin(),t.end());
    
    if (s == t)
    {
        cout << "yes";
    }
    
    else cout << "no";
    
    return 0;
}

