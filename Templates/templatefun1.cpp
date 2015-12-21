#include<iostream>
#include<string>
using namespace std;
template <class T>
void large(T &a, T&b)
{
    if(a>b)
    {
        cout<<a<<"is the largest"<<endl;
    }
    else{
        cout<<b<<"is the largest"<<endl;
    }
}
int main()
{
    int i=5, j=6;
    large(i,j);
    float n=9.89, m=12.67;
    large(n,m);
    string s1= "Hello";
    string s2="World";
    large(s1,s2);
    return 0;

}
