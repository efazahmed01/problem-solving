/*
You will be given n student names. You have to assign a roll number to each student according to their name. 

Basically you need to sort the student's name list and then assign them a roll number according to their name's position in the list.

[Hint: Use a vector to store the name list and then give a roll number to each of them]

It is guaranted that each name will be distinct.

Input

The first line of the input will contain an integer n denoting the number of the students in the class room.

The next n lines will contain n distinct string, each denoting their name. 

1 <= n <= 105

sum of |s| <= 105

Output

Output n integers, where i-th number will tell the roll number of the i-th student.

Example

Input

3

aa

bb

ab

Output

1

3

2
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n; cin >> n;

    vector<pair<string,int>> names(n);
    for(int i = 0; i < n; i++)
    {
        cin >> names[i].first;
        names[i].second = i;
    }

    sort(names.begin(),names.end());

    vector<int> result(n);
    for(int i = 0; i < n; i++)
    {
        int before_roll = names[i].second;
        int cur_roll = i+1;
        result[before_roll] = cur_roll;
    }

    for(int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
    
    
}
