#include<iostream>
using namespace std;
const size =3;
class mul{
private:
    int a[size];
public:
    mul()        // default constructor
    {
        for(int i=0;i<size;i++)
        {
            a[i]=0;
        }
    }
    mul (int *x) //passing via pointer to parametrized constructor
    {
        for(int i=0;i<size;i++)
        {
            a[i]=x[i];
        }
    }
    friend mul operator*(mul &a, mul &b);
    void display()
    {
        for(i=0;i<size;i++)
        {
        cout<<a[i];
        }
    }
};
mul operator*(mul &a, mul &b)
{
mul temp;
for(i=0;i<size;i++)
{
    temp.a[i] = a[i]*b.a[i];
}
return temp;
}

int main()
{
    mul m1{2,4,6};
    mul m2{1,2,3};
    mul m3= m1*m2;
    m3.display();
return 0;
}
