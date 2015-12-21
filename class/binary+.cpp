#include<iostream>
using namespace std;
class add
{
private:
    int x, y;
public:
    add ()
    {
        x=0;
        y=0;
    }
    add (int i, int j)
    {
        x=i;
        y=j;
    }
    add operator-(add &b);
    void display()
    {
    cout<<x<<endl<<y;
    }
};
add add :: operator-(add &b)
{
 add temp;
 temp.x =x-b.x;
 temp.y =y-b.y;
 return temp;
}

int main()
{
 add a1(3,4);
 add a2(4,5);
 add a3;
 a3 = a1-a2;
 a3.display();
 return 0;

}
