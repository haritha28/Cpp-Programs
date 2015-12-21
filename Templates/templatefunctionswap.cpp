#include<iostream>
#include<string>
using namespace std;
template <class T>
void swape(T &n1, T &n2)
{
    T temp;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<n1<<n2;
}
int main()
{
    swape(7,8);
    swape(4.56,7.89);
    return 0;
    }
