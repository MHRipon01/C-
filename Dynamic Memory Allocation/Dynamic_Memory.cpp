#include <bits/stdc++.h>
using namespace std;
int *p;



void fun()
{

    int* x = new int;
    *x = 10;
    p = x;
    cout << "Main -> " << *p <<endl;
    return;
}


int main()
{

  fun();
cout << "Fun " << *p << endl;
    return 0;
}