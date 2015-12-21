#include<iostream>
using namespace std;
class unary{
private:
    int m;
public:
    unary()
    {
        m=0;
    }
    unary(int x)
    {
        m=x;
    }
    friend int operator-(unary &u2);
};
int operator-(unary &u2)
{
    return -u2.m;
}
int main()
{
unary u1(5);
int k = -u1;
cout<<k;
return 0;
}

