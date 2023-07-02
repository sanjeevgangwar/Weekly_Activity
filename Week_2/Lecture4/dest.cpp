#include <iostream>
using namespace std;

int i;
class A
{
public:
    ~A()
    {
        i = 10;
    }
};
class foo()
{
    i = 3;
    A oj;
    return i;
}
int main()
{
    cout << foo() << endl;
}