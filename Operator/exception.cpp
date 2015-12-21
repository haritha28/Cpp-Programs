#include<iostream>
using namespace std;
class test{
private:
    int a,b;
    float c;
public:
    test()
    {
        try{
            cout<<"Enter two integers";
            cin>>a>>b;
            if(b==0)
                throw(b);
            else
                c=a/b;
            cout<<c;
            }
            catch(...)
            {
            cout<<"Division by 0";
            throw;
            }
    }
    ~test()
    {
        cout<<"Object Deleted";
    }
};
int main()
{
    test t;
    try{
    test t2;
    }
    catch(...)
    {
    cout<<"Caught in main";
    }
return 0;
}
