#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[20]="Hello how are you";
    char *k = strstr(str1," ");
    cout<<k-str1+1;
return 0;
}
