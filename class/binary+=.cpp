#include<iostream>
using namespace std;
class abc
{
private:
    int a;
public:
    abc()
    {
        a=0;
    }
    abc(int i)
    {
        a=i;
    }
    abc operator+=(abc &x);
    void display()
    {
    cout<<a;
    }

};
abc abc :: operator+=(abc &x)
{
    x.a = x.a +a;
    return x;
}
int main()
{
    abc a(1);
    abc b(2);
    a+=b;
    a.display();
    return 0;

}
