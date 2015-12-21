#include<iostream>
using namespace std;
const int size = 3;
class subscript
{
private:
    int a[size];
public:
    subscript ()
    {
        for(int i=0;i<size;i++)
        {
            a[i]=1;
        }
    }
    int operator[](int j);
};
int subscript :: operator[] (int j)
 {
        if(j<size)
        {
            return a[j];
        }
        else
        {
            return 0;
        }
    }
int main()
{
    subscript s1;
    cout<<"Value of s1[2]"<<s1[2]<<endl;
    cout<<"Value of s1[1]"<<s1[1]<<endl;
    cout<<"Value of s1[5]"<<s1[5]<<endl;
return 0;
}
