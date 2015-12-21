#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  string text;
  getline (cin,text);
  ofstream outbin("myfile.bin", ios::out | ios::binary);
  const char *temp = text.c_str();
  outbin.write(temp, text.length());
  outbin.close();
  ifstream inbin("myfile.bin", ios::in|ios::binary);
  while(!inbin.eof())
  {
  inbin.read(&text,20);
  cout<<text;
  }
  inibn.close();
  return 0;
}
