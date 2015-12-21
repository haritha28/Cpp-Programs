#include<iostream>
using namespace std;
class note{
private:
    int x;
public:
    note ()
    {
        x=0;
    }
    friend void operator!(note &r);
    void display()
    {
    cout<<x;
    }
};
void  operator! (note &r)
{
    cout<< !r.x;
}
int main()
{
note n1;
!n1;
return 0;
}
