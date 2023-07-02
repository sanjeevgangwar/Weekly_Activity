#include <iostream>
using namespace std;

class student
{
    string passcode;

public:
    string name;
    int id;

    student()
    {
    }

    student(string passcode, int name, int id)
    {
        this->name = name;
        // age = a;
        //  i = id;
        this - > id = id;
        this->passcode = passcode;
    
    
    void into()
    {
        cout << "My name is: " << name << "My id is:" << id << "passcode is" << passcode << endl;
    }
    void setPass(string s)
    {
        passcode = s;
    }
}

void set
pass()
}
int main()
{
    student s1;
    student s1("10", "Sanjeev Kumar", 1);
    student s3;
    s3 = s2;
    // s3+s2;
    s3.into();

    // int a =10;
    // int *ptri=&a;
    // student *ptrs = &s2;

    // cout<<(*ptrs).name<<endl;
    // cout<<ptrs->name<<endl;
    return 0;
}