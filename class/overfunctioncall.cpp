#include<iostream>
using namespace std;
class fcall{
private:
    int a;
public:
    fcall()
    {
        a=0;
    }
    fcall (int i)
    {
        a=i;
    }
    fcall operator()(int a, int b)
    {
       fcall f;
       f.a = a+ b;
       return f;
    }
    void display()
    {
    cout<<a;
    }
};
int main()
{
    fcall f1(11);
    fcall f2(10);
    f2 = f1 (1,2);
    f2.display();
    return 0;
}
