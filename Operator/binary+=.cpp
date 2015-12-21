#include<iostream>
using namespace std;
class abc{
private:
    int x;
    int y;
public:
    abc()
    {
        x=y=0;
    }
    abc (int a, int b)
    {
        x=a;
        y=b;
    }
    friend istream &operator>>(istream &input, abc &a)
    {
        input>>a.x>>a.y;
        return input;
    }
    friend ostream &operator<<(ostream &output, abc &a)
    {
        output<<a.x<<a.y;
        return output;
    }
    abc operator+= (abc &a);
    void display()
    {
        cout<<x<<y;
    }
};
abc operator+= (abc &a)
{
    x=x+y;
    return a;
}
int main()
{

}
