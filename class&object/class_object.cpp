#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a;
    Student b;

    // a.roll = 10; //static value
    // a.gpa = 3.4; //static value
    // a.name = "Ripon"; //static value
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;

    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    cout << "git branch issue solved";
    return 0;
}