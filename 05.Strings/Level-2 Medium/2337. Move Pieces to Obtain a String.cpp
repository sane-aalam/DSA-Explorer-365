// Algorithm ->
// (move) until the reached the space-blank
// (both are not equal) return directly false
// (case-1) if start is 'L' but not able to move left return fasle;
// (case-2) if end is "R" but not able to move right side return fasle

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canChange(string start, string target) {
        int i = 0;
        int j = 0;
        int n = start.size();

        while( i < n || j < n){
            // start or target me black-space aa raha hai 
            // toh aapko 
            while(i < n && start[i] == '_'){
                i++;
            }
            while( j< n && target[j] == '_'){
                j++;
            }
           
            if(i == n or j == n) 
                break;
            if(start[i] != target[j])
                   return false;
            if(start[i] == 'L'){
                if(i < j) 
                     return false;
            }
            if(start[i] == 'R'){
                if(i > j) 
                  return false;
            }

        // move indexes both of strings 
            i++;
            j++;
        }

        // you have reached last correct order!
        return (i == n && j == n);
    }
};