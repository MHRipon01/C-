#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s << endl;

    // reverse(starting , ending point )

    reverse(s.begin() , s.end()); //input: abcde , output: edcba
    cout << s << endl;
    

    return 0;
}