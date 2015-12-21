#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[20];
    ofstream file;
    file.open("a.txt", ios::out);
    if(file==NULL)
    {
        cout<<"File doesnot exist";
    }
    else{
        cout<<"Enter your name";
        cin>>data;
        file<<data<<endl;
    }
    file.close();
    ifstream ifile;
    ifile.open("a.txt", ios::in);
    if(file==NULL)
    {
        cout<<"File doesnot exist";
    }
    else{
        ifile>>data;
        cout<<"Your name :"<<data;
    }
    ifile.close();
return 0;
}
