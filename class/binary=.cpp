#include<iostream>
using namespace std;
class equalto
{
private:
    int x, y;
public:
    equalto()
    {
        x=0;
        y=0;
    }
    equalto(int i, int j)
    {
        x =i;
        y =j;
    }
    void operator=(equalto &a);
    void display()
    {
    cout<<x<<y;
    }
};
void equalto :: operator=(equalto &a)
{

x = a.x;
y = a.y;

}
int main()
{
equalto E(3,4);
equalto E1(4,5);
E = E1;
E.display();
}
