#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // cout << s << endl;

    // way 1
    //  for (int i = 0; i < s.size(); i++)
    //  {
    //      cout << s[i] << endl;
    //  }

    // way 2
    for (char c : s)
    {
        cout << c << endl;
    }

    return 0;
}