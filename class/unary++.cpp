#include<iostream>
using namespace std;
class unary
{
private:
    int x,y;
public:
     unary()
     {
     x=1;
     y=1;
     }
     unary(int i, int j)
     {
     x=i;
     y=j;
     }
     unary operator++();
     void display()
     {
      cout<<x<<y;
     }
};
unary unary :: operator++()
{
unary temp;
temp.x =x++;
temp.y =y++;
}

int main()
{
    unary u(2,3);
    u.display();
    u++;
    u.display();
return 0;
}
