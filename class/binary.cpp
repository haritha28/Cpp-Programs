#include<iostream>
using namespace std;
class rel
{
private:
    int x;
    int y;
public:
    rel ()
    {
     x=0;
     y=0;
    }
    rel (int i, int j)
    {
        x=i;
        y=j;
    }
    friend bool operator< (rel &a, rel &b);

};
 bool operator< (rel &a, rel &b)
{
    if(a < b.x)
    {
     return true;
    }
    else
    {
      return false;
    }

}

int main()
{
    rel r1(1,2);
    rel r2(2,3);
    r1<r2;
    return 0;
}
