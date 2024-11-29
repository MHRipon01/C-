#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // sort(starting , ending )
    sort(s.begin(), s.end());//input:abcdBCA ,output:ABCabcd

    cout << s << endl;

    return 0;
}