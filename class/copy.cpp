#include<iostream>
using namespace std;
class distance
{
private:
      int feet;
      float inches;
public:
      void display();
};
void distance :: display()
{
    cout<<feet;
    cout<<inches;
}
int main()
{
distance d1(11,12.67);
distance d2(d1);
d2.display();
}
