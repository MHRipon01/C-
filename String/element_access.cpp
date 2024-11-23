#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    cout << s[2] << endl;    // accessing with index
    cout << s.at(2) << endl; // accessing with at func
    cout << s.front() << endl; //access the first element of the string.


    cout << s.back() << endl; //access the last element of the string.
    return 0;
}