/* Working with multiple files*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("file.txt", ios::out);
    fout<<"India";
    fout<<"Singapore";
    fout<<"Australia";
    fout.close();
    fout.open("file2.txt" , ios::out);
    fout<<"Kerala";
    fout<<"Banglore";
    fout<<"Chennai";
    fout.close();
    char data[20];
    ifstream fin;
    fin.open("file.txt", ios::in);
    while(fin.eof()==0)
    {
        fin.getline(data,20);
        cout<<data<<endl;
    }
    fin.close();
    fin.open("file2.txt", ios::in);
    while(fin.eof()== 0)
    {
        fin.getline(data,20);
        cout<<data<<endl;
    }
    fin.close();
return 0;
}
