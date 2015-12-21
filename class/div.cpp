#include<iostream>
using namespace std;
class Int
{
    private:
    int a;
    public:
            void init()
            {
                int a=0;
                cout<<a;
            }
            void initialize()
            {
                int a;
                cout<<"\nEnter a no :\n";
                cin>>a;
                cout<<a<<endl;
            }
            void display()
            {
                cout<<"The no is "<<a<<endl;
            }
            void add()
            {
               int a,b;
               cout<<"a and b?";
               cin>>a>>b;
               cout<<"sum is "<<a+b;
            }
};
int main()
{
    Int i;
    i.init();
    i.initialize();
    i.display();
    i.add();
}






