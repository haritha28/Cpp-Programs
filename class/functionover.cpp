#include<iostream>
using namespace std;
class printData
{
public:
    void print(int i)
    {
        cout<<i<<endl;
    }
    void print(double d)
    {
        cout<<d<<endl;
    }
    void print(char *c)
    {
        cout<<c<<endl;
    }
};
int main()
{
    printData p;
    p.print(6);
    p.print(78.977);
    p.print("$");
    return 0;
}
