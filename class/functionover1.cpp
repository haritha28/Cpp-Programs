#include<iostream>
using namespace std;
class calc{
public:
    void area(float k, float j)
    {
    cout<<k*j<<endl;
    }
    void area(float r)
    {
    cout<< 3.14*r*r<<endl;
    }
    void area(float a, float b, float c)
    {
    cout<<a*b*c;
    }

};
int main()
{
calc c;
char y = 'y';
float l,b,r,ba,h,s;
int k;
do
{
cout<<"Enter anyone of the options:\n1.Rectangle \n2.Circle \n3.Triangle\n";
cin>>k;
switch(k)
{
case 1 : cout<<"Enter Length and breadth";
           cin>>l>>b;
           c.area(l,b);
           break;
case 2 : cout<<"Enter Radius";
           cin>>r;
           c.area(r);
           break;
case 3 : cout<<"Enter triangle";
           cin>>ba>>h>>s;
           c.area(ba,h,s);
           break;
default  : cout<<"Please choose the right option";
            break;
}
cout<<"Press y to continue";
cin>>y;
}
while(y=='y'|y=='Y');
return 0;

}
