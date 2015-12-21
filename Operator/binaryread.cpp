#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int str[3]={'1','2','3'};
    ofstream fout;
    fout.open("a.DAT",ios::binary|ios::out);
    fout.write(str, sizeof(str));
    fout.close();
    ifstream fin;
    fin.open("b.DAT", ios::binary |ios::in);
    fin.read(str,sizeof(str));
    cout<<str<<endl;
    fin.close();
return 0;
}
