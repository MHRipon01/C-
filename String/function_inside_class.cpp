#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    // constructor
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        (*this).roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {

        cout << "Total marks of " << name << " = " << math + english << endl;
    }

    // function
    void hello()
    {
        cout << "hello from " << name << endl;
    }
};

int main()
{
    Student sakib("Sakib ahmed", 33 , 85 , 92);
    // cout << sakib.name << " " << sakib.roll << endl;
    // sakib.hello();
    sakib.total();


    Student Rakib("Rakib Ahmed", 42 , 65 , 95);
    // Rakib.hello();
    Rakib.total();
    return 0;
}