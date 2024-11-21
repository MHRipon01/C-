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
        (*this).cls = cls; // dereferencing this keyword
        this->gpa = gpa;
    }
};

Student fun() //static function
{
    Student Rakib(42, 2, 3.00);
    return Rakib;
}

int main()
{

    Student Ripon(41, 2, 3.65);
    Student Rakib(42, 2, 3.00);

   Student obj = fun();
    // cout << Ripon.roll << " " << Ripon.cls << " " << Ripon.gpa << endl;
    // cout << Rakib.roll << " " << Rakib.cls << " " << Rakib.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}