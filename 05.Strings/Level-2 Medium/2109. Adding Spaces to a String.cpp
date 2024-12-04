

// You are given a 0-indexed string s and a 0-indexed integer array spaces that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.

// For example, given s = "EnjoyYourCoffee" and spaces = [5, 9], we place spaces before 'Y' and 'C', which are at indices 5 and 9 respectively. Thus, we obtain "Enjoy Your Coffee".
// Return the modified string after the spaces have been added.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        int m = spaces.size();
        string newStr = "";

        // pointer-algorithm used here 
        int j = 0;
        for(int i = 0; i<n; i++){
            // current index == spaces given value 
            // we have to insert the new space 
            if( j < m && i == spaces[j]){
                // insert empty space one
                newStr += ' ';
                j++;
            }
            // otherwise insert the current char of string 
            newStr += s[i];
        }
        return newStr;
    }
};