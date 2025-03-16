#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  ifstream Fileku;
  string output, buffer;
  string nama;

  Fileku.open("dataku.file", ios::trunc | ios::in);
  cout << "berhasil" << endl;
  Fileku.close();

   


    cin.get();
    return 0;
}
