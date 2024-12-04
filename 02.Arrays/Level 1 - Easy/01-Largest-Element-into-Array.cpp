
// 45 Days Challenge to solved - 450 Leetcode problems 
// 10 Problems daily 
// consistency -> DryRun -> clear concepts again!
// Clean paper -> write your future today!

#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// bruthforce method -> 
// sort method take time complexity - (nLogN)
int largest(vector<int> &arr) {
        // code here
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int largestElement = arr[n-1];
    return largestElement;
}

int largestElementFinder(vector<int> & nums, int n){
    int largestElement = nums[0];
    for(int currentIndex = 1; currentIndex < n; currentIndex++){
        if(nums[currentIndex] > largestElement){
            largestElement = nums[currentIndex];
        }
    }
    return largestElement;
}

int main(){
    vector<int> nums = {1, 8, 7, 56, 90};
    int sizeOfArray = nums.size();
    int largestElement = largestElementFinder(nums,sizeOfArray);
    cout << "result of the problem statement -> " << largestElement << endl;
    return 0;
}