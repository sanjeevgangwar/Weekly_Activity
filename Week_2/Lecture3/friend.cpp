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

    student()
    {
    }
    student(int id, string name, string passcode, int age)
    {
        this->name = name;
        this->id = id;
        this->passcode = passcode;
        this->age = age;
    }
    // void into()
    // {
    //     cout << "My name is " << name << "My id is: " << id << endl;
    // }
    // void setter(string s, int a, string n, int i)
    // {
    //     passcode = s;

    //     age = a;
    //     name = n;
    //     id = i;
    // }

    // friend class bestfriend;
};
void hacker(student s)
{
    // cout << s.passcode << " " << s.age << endl;
}

class bestfriend
{
public:
    void sharingsecret()
    {
        // cout << s.passcode << s1.age << endl;
    }
    friend void hacker(student s);
};
int main()
{
    student s1(1, "Sanjeev Kumar", "0001", 10);

    // s1.setter("0001", 10, "Sanjeev Kumar",1);
    // s1.name="Sanjeev Kumar";
    int a = 10;
    int *b = &a;
    student *ptrs = &s1;

    cout << ptrs->name << endl;
    // cout<<(*ptrs),name<<endl;
    bestfriend bff;
    // bff.sharingsecret(s1);
    hacker(s1);
    // s1.passcode = "001";
    return 0;
}