#include <iostream>
using namespace std;

class student
{
    string passcode;

public:
    // int,char,string,float;
    string name;
    int id;

    void into()
    {
        cout << "My name is " << name << "My id is: " << id << endl;
    }
    void setPass(string s)
    {
        passcode = s;
    }
};
int main()
{
    student s1;
    s1.name = "Sanjeev kumar";
    s1.id = 12220131;
    s1.setPass("0001");
    s1.into();
    // s1.passcode="001";
    return 0;
}