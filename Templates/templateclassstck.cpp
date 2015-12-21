#include<iostream>
using namespace std;
template <class T>
class stack{
protected:
    T arr[5];
public:
    int top,i;
    T no;
    stack()
    {
        for(i=0;i<5;i++)
        {
            arr[i]=NULL;
        }
            top=-1;
    }
    void push(T &a)
    {
        top++;
        if(top<5)
        {
            arr[top]= a;
        }
        else{
            cout<<"Stack full";
            top--;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty";
        }
        else{
            T temp;
            temp = arr[top];
            arr[top]==NULL;
            cout<<temp<<arr[top];
            top--;
        }
    }
};
int main()
{
    stack <int> a;
    int opt;
    cout<<"Enter any option";
    cin>>opt;
    switch(opt)
    {
        case 1 :cout<<"Enter number to be pushed";
                cin>>a.no;
                a.push(a.no);
                break;
        case 2: cout<<"To pop";
                a.pop();
                break;
    }
}

