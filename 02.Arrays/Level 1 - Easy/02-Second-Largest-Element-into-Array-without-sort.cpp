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

// Approach-1 
// sort the array
// arr[n-2] = have second largest element

// Appraoch-2
// if currentRank higher to student-1 Ranks
// So you need to rearrange the ranks 
// second student assign the value of firststudent rank 
// first student assign new value(High value)
// Dry Run is one of most (IMP)

// Protocol of life -->
// Mistake-1 never come into harm relationship.(kam hai to baat karo, baki na karo) 
// Mistake-2 don't trust indian education system
// Mistake-3 bluid something(bluid your own), need Time management!
// Mistake-4 Money is like women, communcation skills is most important, read,write!
// Mistake-5 Learn to peoples,mistakes karo,abhi bacche ho,30+ age me you are not able manage these failure, but alone become best!

int getSecondLargest(vector<int> &arr) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    // second largest element will be answer, after sorting the array
    int secondLargestElement = arr[n-2];
    return secondLargestElement;
}

// Approach::
// -> first the first_Largest Element
// -> think like simple,clean,clear
// -> create new variable SecondLargestElement,
// -> go the array, ask each element, (are you greater than me(secondLargestElemtn),are you not equal to FirstLargest-element)
// -> Then you are mine second Largest Element.
// -> Time limit exceeded. (TLE)
// -> we have to reduce the time complexity of the problem statement!
int BetterSecondLargest(vector<int> &arr) {
    // Code Here
    int n = arr.size();
    int firstElement = -1;
    int secondElement = -1;
    for(int currIndex = 0; currIndex < n; currIndex++){
        firstElement = max(firstElement,arr[currIndex]);
    }

    // searching the second largest element into the array
    for(int currindex = 0; currindex < n; currindex){
        if(arr[currindex] > secondElement && arr[currindex] != firstElement){
            secondElement = arr[currindex];
        }
    }
    // result we have to return the maximum second element into the array 
    return secondElement;
}



// Approach::
// Optimzation appraoch + code
int secondLargestElement(vector<int> & nums, int n){
 
    int firstLargestElement = -1;
    int secondLargestElement = -1;
    
    for(int currentIndex = 0; currentIndex < n; currentIndex){
        if(firstLargestElement > nums[currentIndex]){
            secondLargestElement = firstLargestElement;
            firstLargestElement = nums[currentIndex];
        }else if(firstLargestElement > nums[currentIndex] && secondLargestElement < nums[currentIndex]){
            secondLargestElement = nums[currentIndex];
        }
    }
    return secondLargestElement;
}

int main(){
    vector<int> nums = {1, 8, 7, 56, 90,4,2};
    int sizeOfArray = nums.size();
    int largestElement = secondLargestElement(nums,sizeOfArray);
    cout << "result of the problem statement -> " << largestElement << endl;
    return 0;
}