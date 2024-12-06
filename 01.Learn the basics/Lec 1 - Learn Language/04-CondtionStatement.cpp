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

bool CheckerUserPassedExam(int marks){
    if(marks < 50){
        return 0;
    }else{
        return 1;
    }
}

//start code
int main()
{
    // Data Types (declare)
    int currentNumber = 18;
    char currentChar = 'a';
    string userName = "RajVikarmaAdtiya";
    bool watchYoutube = true;
    long long largestNumber = 191919911;
    long long int largestNumberWorld = 819199191;
    float flaotingValue = 191.5;

    // printing all value into terminal 
    cout << currentNumber << endl;
    cout << currentChar << endl;
    cout << userName << endl;
    cout << watchYoutube << endl;
    cout << largestNumber << endl;
    cout << largestNumberWorld << endl;
    cout << flaotingValue << endl;

    if(currentNumber == 18 && watchYoutube == true){
        cout << "possible to watch Netfix!" << endl;
    }else{
        cout << "Not possible to watch netfix!" << endl;
    }

    int marks = 77;
    bool resultResult = CheckerUserPassedExam(marks);
    cout << "result of exam ->" << resultResult << endl;

    return 0;
}

