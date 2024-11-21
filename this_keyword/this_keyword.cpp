#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        (*this).cls = cls; //dereferencing this keyword
        this->gpa = gpa;
    }
};

int main()
{

    Student Ripon(41, 2, 3.65);
    Student Rakib(42, 2, 3.00);

    cout << Ripon.roll << " " << Ripon.cls << " " << Ripon.gpa << endl;
    cout << Rakib.roll << " " << Rakib.cls << " " << Rakib.gpa << endl;

    return 0;
}