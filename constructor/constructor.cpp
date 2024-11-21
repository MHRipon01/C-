#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    int r;
    int c;
    double g;
    cin >> r >> c >> g;

    Student rahim(r,c,g);

    // Student karim(3, 2, 4.96);
    // karim.roll = 3;
    // karim.cls = 2;
    // karim.gpa = 5;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}