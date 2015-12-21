#include<iostream>
using namespace std;
class foo
{
private :
    int count=0;
public :
    foo()
    {
     count++;
    }
    int getcount()
    {
    return count;
    }
};
//int foo :: count;
int main()
{
foo f1,f2,f3;
cout<<f1.getcount()<<endl;
cout<<f2.getcount()<<endl;
cout<<f3.getcount()<<endl;
}
