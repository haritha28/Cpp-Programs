#include<iostream>
using namespace std;
class binary{
private:
    int x;
    int y;
public:
    binary()
    {
        x=y=0;
    }
    binary (int a, int b)
    {
        x=a;
        y=b;
    }
    binary operator+(binary &b);
    void display()
    {
    cout<<x<<endl<<y;
    }
};
binary binary :: operator+(binary &b)
{
    binary c;
    c.x=x+b.x;
    c.y=y+b.y;
    return c;
}
int main()
{
    binary b1(2,3);
    binary b2(4,5);
    binary b3 = b1+b2;
    b3.display();
    return 0;
}
