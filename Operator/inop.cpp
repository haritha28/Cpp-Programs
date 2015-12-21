#include<iostream>
using namespace std;
class exinsert
{
    private:
        int a;
    public:
        exinsert()
        {
            a=0;
        }
        exinsert(int h)
        {
            a=h;
        }
        friend istream  &operator>>(istream &input,exinsert &e)
        {
            input>>e.a;
            return input;
        }
        friend ostream &operator<<(ostream &output, exinsert &r)
        {
            output<<r.a;
            return output;
        }
};
int main()
{
exinsert e;
cin>>e;
cout<<e;
return 0;
}
