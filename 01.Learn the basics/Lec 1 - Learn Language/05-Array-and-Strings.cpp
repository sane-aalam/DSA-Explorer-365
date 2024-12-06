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

// Tip-1
// randomly generate value
// when you are try to access the element,
// which is not present into the arary
// return random memory allocation
// return garbage memory 

// output 
// first element -> 11
// last element -> 1195
// no present into the array ->6422356
// 11 13 14 15 1195 

// Assignment-1
// creating the function to print the array
// creating the function to search and Element into the array 
// creating the function to sum of array 
void printingArrayUsingMethod(int arr[], int n){
    int current_index = 0;
    while(current_index < n){
         cout << arr[current_index] << " ";
         current_index = current_index + 1;
    }
}

int searchIntoAraryTargetValue(int arr[], int n, int target){
    
    for(int currIndex = 0; currIndex < n; currIndex++){
        if(arr[currIndex] == target){
            return currIndex;
        }
    }
    return -1;
}

int totalSumArray(int arr[], int n){
    int totalsum = 0;
    for(int currIndex = 0; currIndex < n; currIndex++){
        totalsum = totalsum + arr[currIndex];
    }
    return totalsum;
}

// your code start 
int main()
{
    int arr[5] = {11,13,14,15,1195};
    cout << "first element -> " << arr[0] << endl;
    cout << "last element -> " << arr[4] << endl;
    cout << "no present into the array ->" << arr[5] << endl;

    int sizeOfArray = sizeof(arr)/sizeof(int);
    int target = 15;
    printingArrayUsingMethod(arr,sizeOfArray);
    cout << endl;
    int resultIndexValue = searchIntoAraryTargetValue(arr,sizeOfArray,target);
    cout << resultIndexValue << endl;
    int totalSum = totalSumArray(arr,sizeOfArray);
    cout << "Total sum of array -> " << totalSum << endl;
    
    return 0;
}

