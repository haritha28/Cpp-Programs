#include<iostream>
using namespace std;
class notover
{
private:
    bool  x;
public:
    notover()
    {
        x=1;
    }
    notover(int k)
    {
        x=k;
    }
    friend bool operator!(notover &n);
    void display()
    {
    cout <<x;
    }
};
bool operator!(notover &n)
{
    return !n.x ;
}
int main()
{
notover n1(0);
!n1;
n1.display();
return 0;
}
