#include<iostream>
using namespace std;
class extract
{
private:
    int a;
public:
    extract ()
    {
        a=1;
    }
    friend istream operator>>(istream &input,extract &e)
    {
        input>>e.a;
        return input;
    }
};


int main()
{
    extract e;
    cin>>e;
    return 0;
}
