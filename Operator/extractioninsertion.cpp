#include<iostream>
using namespace std;
class extract{
    private:
        int n;
    public:
        extract()
        {
            n=1;
        }
        friend istream &operator>>(istream &input,extract &e);
        friend ostream &operator<<(ostream &ouptut, extract &e);
};
istream &operator>>(istream &input, extract &e)
{
    input>>e.n;
    return input;
}
ostream &operator<<(ostream &output, extract &e)
{
    output<<e.n;
    return output;
}
int main()
{
    extract e;
    cin>>e;
    cout<<e;
    return 0;
}
