#include<iostream>
using namespace std;
class A{
public:
    void print()
    {
        cout<<"Hi";
    }
};
class B: public A{
public:
    void print()
    {
        cout<<"Hello";
    }
};
class C: public B {
public:
    void print()
    {
        cout<<"Good";
    }
};
int main()
{
    B c;
    c.print();
return 0;
}
