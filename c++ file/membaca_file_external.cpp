#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  ifstream Fileku("dataku.file");
  string output, buffer;
  string nama;

  Fileku.open("dataku.file");
  cout << "berhasil" << endl;
  Fileku.close();

   


    cin.get();
    return 0;
}
