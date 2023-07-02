#include <iostream>
using namespace std;

class complexnumber
{
public:
    int real;
    int img;

    complexnumber(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << "+ i" << img << endl;
    }
    complexnumber plus(complexnumber c)
    {
        int r = this->real + c.real;
        int i = this->img + c.img;
    }
    complexnumber result(r, i)
    {
        return result;
    }
    complexnumber multiply(complexnumber c)
    {
        // (a+ib)*(c+id) = a*c +id*a+ib*c-b*c;
        int x = this->real * c.real;
        int y = this->real * c.img;
        int z = this->img * c.real;
        int a = this->img * c.img;

        return complexnumber(x - a, y + z);
    }
    // return_type operator + (agrs){}
    complexnumber operator+(complexnumber c)
    {
        int r = this->real = c.real;
        int i = this->img = c.img;

        return complexnumber(r, i);
    }
    void operator++()
    {
        this->real += 1;
        this->img += 1;
        return;
    }
};
int main()
{
    complexnumber c1(5, 5);
    complexnumber c2(1, 1);
    complexnumber c4(2 2);
    complexnumber c3 = c1.plus(c2.plus(c4));
    // c1+c3;
    // complexnumber c5 = c1+c2;
    // (c1)+(c2);
    // c5.display();
    ++c2;
    // a=1; ++a->a=a+1;a==2;
    // complexnumber c5 = c1.multify(c2);

    c3.display();
    // c1.display();
    return 0;
}