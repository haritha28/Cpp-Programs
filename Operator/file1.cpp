#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    char data[100];
    ofstream ifile;
    ifile.open("file1.txt",ios::out);
    ifile<<"This is written ti file";
    ifile.close();
    ifstream ifile;
    ifile.open("file.txt");
    if(!ifile.eof())
    {
        cout<<"Error";
    }
    else
    {
        ifile>>data;
        cout<<data;
    }
}
