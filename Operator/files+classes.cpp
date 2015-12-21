#include<iostream>
#include<fstream>
using namespace std;
class abc{
private:
    char a[30];
    int b;
public:
    void getdata()
    {
        cout<<"Enter the name and age";
        cin.getline(a,30);
        cin>>b;
    }
    void displaydata()
    {
        cout<<"Name:"<<a<<endl;
        cout<<"Age:"<<b<<endl;
    }
};
int main()
{
    abc a[3];
    ofstream fout;
    fout.open("a.DAT",ios::binary|ios::out);
    if(fout==NULL)
    {
        cout<<"File donot exist";
    }
    else{
        for(int i=0;i<3;i++)
        {
            abc[i].getdata();
            fout.write((abc *)&abc[i],sizeof(abc[i]));
        }

    }
    fout.close();
    ifstream fin;
    fin.open("a.DAT",ios::binary|ios::in);
    if(fin==NULL)
    {
        cout<<"File donot exist";
    }
    else{
        while(!fin.eof())
        {
            for(int i=0;i<3;i++)
                {
                fin.read((abc *)&abc[i], sizeof(abc[i]));
                a[i].displaydata();
                }
        }
    }
    fin.close();
return 0;
}
