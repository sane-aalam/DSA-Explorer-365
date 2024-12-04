#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int breakpoint = 0;
        /*
        step by step appraoch used 
        1 - if there is zero breakpoint then you can say 
        array is sorted 
        */
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] > nums[(i+1)%n]){
                breakpoint ++ ;
            }
        }
        return breakpoint < 1;
    }
};