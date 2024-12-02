/*
Replace oco,,, example ococo ocococo ococococococo.....!
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result;
    for (int i = 0; i < n; )
    {
        if (s.substr(i, 3) == "oco")
        {
            int j = i + 3;
            while (j + 1 < n && s.substr(j, 2) == "co")
            {
                j += 2;
            }
            result += "***";
            i = j;
        } 
        else 
        {
            result += s[i];
            i++;
        }
    }
    
    cout << result << endl;
    return 0;
}
