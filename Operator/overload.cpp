#include<iostream>
using namespace std;
class extract{
public:
    int a;
    extract()
    {
        a=1;
    }
    friend istream& operator>>(istream &input, extract &e);
    friend ostream& operator<<(ostream &output,extract &e);
};
istream& operator>>(istream &input, extract &e)
{
    input>>e.a;
    return input;
}
ostream& operator<<(ostream &output, extract &e)
{
    output<<e.a;
    return output;
}
int main()
{
extract e1;
cin>>e1;
cout<<e1;
return 0;
}
