#include<iostream>
using namespace std;
class div
{
private:
    int x;
public:
    div()
    {
        x=1;
    }
    div(int i)
    {
        x=i;
    }
    friend div operator/(div &a,div &b);
    void display()
    {
    cout<<x;
    }
};
div operator/(div &a,div &b)
{
div temp;
temp.x = a.x/b.x;
return temp;

}
int main()
{
    div d1(10);
    div d2(2);
    div d3 = d1/d2;
    d3.display();
return 0;
}
