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

int LinearSearchAlgorithm(vector<int> nums, int n, int target){

    for(int index = 0; index < n; index++){
        if(nums[index] == target){
            return 1;
        }
    }
    return 0;
}


int main(){
    vector<int> nums = {1, 8, 7, 56, 90,4,2};
    int sizeOfArray = nums.size();
    int target = 90;
    cout << LinearSearchAlgorithm(nums,sizeOfArray,target) << endl;
    return 0;
}