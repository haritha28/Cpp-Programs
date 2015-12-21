#include<iostream>
using namespace std;
class unary
{
private:
    int y;
public:
    unary()
    {
        y=0;
    }
    unary(int a)
    {
        y=a;
    }
    friend istream  &operator>>(istream &input,unary &e)
        {
            input>>e.y;
            return input;
        }
    friend ostream &operator<<(ostream &output,unary &r)
        {
            output<<r.y;
            return output;
        }
    int operator++();
    void display()
    {
        cout<<y;
    }
};
 int unary :: operator++()
{
    y =y+1;
    return y;
}
int main()
{
    unary u1;
    unary u2;
    cin>>u1;
    u2= ++u1;
    cout<<u2;
return 0;
}
