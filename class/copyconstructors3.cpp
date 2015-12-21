#include<iostream>
using namespace std;
class animals{
public:
    int lions;
    int tigers;
    animals()
    {
    lions=0;
    tigers=0;
    }
    animals(int x, int y)
    {
    lions=x;
    tigers=y;
    }
    void getdata()
    {
    cin>>lions>>tigers;
    }
    void showdata()
    {
    cout<<lions<<"\t"<<tigers;
    }
};
int main()
{
animals a1;
cout<<a1.lions;
return 0;
}
