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

// Problem Solved Successfully 100%
// Set only store unique elements 
// Set -> no duplicate elements 
#include <set>

vector<int>findUnion(vector<int> nums1,vector<int> nums2,int size1, int size2 ){
    set<int> st;
    for(int index = 0; index < size1; index++){
        st.insert(nums1[index]);
    }
    for(int index = 0; index < size2; index++){
        st.insert(nums2[index]);
    }

    // Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.
    // 
    vector<int> result;
    for(auto num : st){
        result.push_back(num);
    }
    return result;
}


int main(){
    // problem statement
    // Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.
    vector<int> nums1 = {1, 8, 7, 56, 90,4,2};
    vector<int> nums2 = {1,8,90,4,2,56,88181};
    int size1 = nums1.size();
    int size2 = nums2.size();
    
    vector<int> result = findUnion(nums1,nums2,size1,size2);
    for (int i : result){
            cout << i << ' ';
    }
    cout << endl;
    return 0;
}