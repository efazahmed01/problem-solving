#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n; cin >> n;
    map<string, int> attendence;
    int id = 0;
    for (int i = 0; i < n; i++){
        string s; 
        cin >> s;
        if (attendence.find(s) == attendence.end()){
            attendence[s] = id;
            id++;
        }
        else{
        cout << attendence[s] << endl;
        }
    }
    return 0;
}
