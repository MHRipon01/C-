#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(starting , ending);
    // sort(a, a + 4); // a means 0 index of the array(a = a[0])
    sort(a ,a+n); //ascending
    sort(a , a+n, greater<int>()); //descending
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}