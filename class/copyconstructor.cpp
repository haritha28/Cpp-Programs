#include<iostream>
using namespace std;
class Distance
{
private:
    int inches;
    int feet;
public:
    Distance()
    {
    inches=0;
    feet=0;
    }
    Distance(int in , int ft)
    {
    inches =in;
    feet= ft;
    }
    void getdist()
    {
    cout<<"Enter distance in inches";
    cout<<"Enter distance in feet";
    }
    void showdist()
    {
    cout<<feet<<endl<<inches;
    }
};
int main()
{
Distance  dist1(6,7);
Distance dist2(dist1);
dist2.showdist();
return 0;
}
