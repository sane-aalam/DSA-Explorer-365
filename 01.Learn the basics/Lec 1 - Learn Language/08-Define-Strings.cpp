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

// (Leetcode used) - Keep remember this basic method
// Using stoi() function - convert string to integer
// Using atoi() function -  character array or string literal as an argument and returns its value in an integer.
// Using stringstream - allows us to associate a string to be read as if it were a stream. We can use it to easily convert strings of digits into ints, floats, or doubles
// Using sscanf() function - to take input-Value
// Using for Loop - traverse the string
// Using strtol() function - It converts a string to a long integer value, respectively.

// your code start
int main()
{
    string userName = "SaneAalam";
    string data = "12";
    cout << userName[0] << endl;
    cout << userName[1] << endl;
    cout << userName[2] << endl;
    cout << userName << endl;
    cout << stoi(data) << endl;
    int stringSize = userName.size();
    cout << "size of string -> " << stringSize << endl;
    cout << "------------------------" << endl;
    int currIndex = 0;
    while(currIndex < stringSize){
        cout << userName[currIndex] << " ";
        currIndex = currIndex + 1;
    }
    return 0;
}
