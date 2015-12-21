#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char abc[50] = "I am Barry allen! The fastest man alive!";
    ofstream fout;
    fout.open("a.DAT", ios::out|ios::binary);
    if(fout==NULL)
    {
        cout<<"The file donot exist";
    }
    fout.write((char*)&abc, sizeof(abc));
    fout.close();
    ifstream  fin;
    fin.open("a.txt",ios::binary|ios::in);
    if(fin==NULL)
    {
        cout<<"The file donot exist";
    }
    else{
        while(fin)
        {
            fin.read((char*)&abc, sizeof(abc));
            cout<<abc;
        }
    }
    fin.close();
    return 0;
}
