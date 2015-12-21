#include<iostream>
using namespace std;
template <class T>
class stac{
    public:
        T arr[20];
        int item;
        int top;
        stac()
        {
            top=-1;
            for(int i=0;i<20;i++)
            {
                arr[i]=0;
            }
        }
        void push(T a);
        void pop();

};
template <class T>
void stac<T>:: push(T a)
{
    if(top==19)
    {
        cout<<"The stack is full";
    }
    else
    {
        top++;
        arr[top]=a;
    }
}
template <class T>
void stac<T> :: pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty";
    }
    else{
        T temp;
        temp = arr[top];
        arr[top]= 0;
        top--;
    }
}
int main()
{
    stac < int> a;
    int opt;
    int k=1;
    do{
    cout<<"Enter any one of the option : \n1.Push \n2.Pop";
    cin>>opt;
    switch(opt)
    {
        case 1 : cout <<"Enter the number to be pushed";
                    cin>>a.item;
                   a.push(a.item);
                   break;
        case 2 : a.pop();
                   break;
        default  : cout<<"choose the right option";
    }
    cout<<"To continue press 1";
    cin>>k;
  }
  while(k==1);
return 0;
}

