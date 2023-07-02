#include <iostream>
using namespace std;

class student
{
    string passcode;
    friend class bestfriend;

protected:
    int age;

public:
    // int,char,string,float;
    string name;
    int id;

    void into()
    {
        cout << "My name is " << name << "My id is: " << id << endl;
    }
    void setPass(string s, int a)
    {
        passcode = s;
        age = a;
    }

    // friend class bestfriend;
};
class bestfriend
{
public:
    void sharingsecret()
    {
        cout << s.passcode << s.age << endl;
    }
};
int main()
{
    student s1;
    s1.setPass("0001", 10);
    bestfriend bff;
    bff.sharingsecret(s1);
    return 0;
}