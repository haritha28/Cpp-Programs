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
    int operator+()
    {
        return +m;
    }
};
int main()
{
unary u1(5);
int k = +u1;
cout<<k;
return 0;
}
