#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20]="Hello how are you?";
    char str1[10]="how";
    char *k = strstr(str,str1);
    cout<<k-str+1;
    return 0;
}
