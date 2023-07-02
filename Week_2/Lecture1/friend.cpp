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
void hacker(student s)
{
    cout << s.passcode << " " << s.age << endl;
}

class bestfriend
{
public:
    void sharingsecret()
    {
        cout << s.passcode << s.age << endl;
    }
    friend void hacker(student s);
};
int main()
{
    student s1;
    s1.setPass("0001", 10);
    bestfriend bff;
    // bff.sharingsecret(s1);
    hacker(s1);
    // s1.passcode = "001";
    return 0;
}