#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello world!";
    // s.clear(); //clears the string
    // cout << s.size() << endl;
    // cout << s.max_size() << endl; //returns the maximum size that string can hold.
    // cout << s.capacity() << endl; // returns current available capacity of the string.
    // cout << s << endl;

    // if (s.empty() == true) //return true/false if the string is empty.

    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "Not empty" << endl;
    // }

    s.resize(19, '2'); // change the size of the string.

    cout << s << endl;

    return 0;
}