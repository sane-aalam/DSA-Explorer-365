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

// Access Element = 0(1)
// Traverse Array = 0(n)
// Searching Array = 0(n)
// Define the variable = 0(1)

// Constant time (O(1)): ->
// Operations that take the same amount of time regardless of input size, like accessing a single element in an array. 

// Logarithmic time (O(log n)): ->
// Time grows proportionally to the logarithm of the input size, often seen in binary search algorithms. 

// Linear time (O(n)): ->
// Time grows directly with the input size, like iterating through an array once. 

// Quadratic time (O(n^2)): ->
// Time grows as the square of the input size, usually with nested loops. 

// Worst-case analysis: ->
// When analyzing time complexity, we usually focus on the worst-case scenario, as it provides a reliable upper bound on the algorithm's performance. 

// Big O notation only cares about the dominant term:
// When analyzing complex expressions, only the term with the highest growth rate is considered