#include<iostream>
using namespace std;
template <class T>
void swape(T &u, T&v)
{
T temp;
temp=u;
u=v;
v=temp;
cout<<"a"<<u<<"b"<<v;
}
int main()
{
int a,b;
cout <<"Enter two numbers";
cin>>a>>b;
swape(a,b);
return 0;
}
