#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    s[0]= 'G';   
    string s2 = " hi";

    // s += s2; // append another string.
    // s.append(s2); // append another string.

    s.push_back('A');//add single character to the last of the string.
    s.pop_back();//remove the last character of the string.

    cout << s << endl;

    return 0;
}