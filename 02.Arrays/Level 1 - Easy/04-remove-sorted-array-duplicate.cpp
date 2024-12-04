
#include <bits/stdc++.h>
using namespace std;

// Modification of the array using without duplicataion
// using updateIndex we have to keep track the (how many of elements we have current element!)
// we can solve this problem using Re-order the array
class Solution{
public:
    int removeDuplicates(vector<int> &arr){

        int updateIndex = 0;
        int n = arr.size();
        for (int i = 1; i < n; i++){
            // index 0 element is not equal to index 1 element
            if (arr[updateIndex] != arr[i])
            {
                arr[updateIndex + 1] = arr[i];
                updateIndex++;
            }
        }
        return updateIndex + 1;
    }
};
// TC - 0(N)
// SC - 0(1)