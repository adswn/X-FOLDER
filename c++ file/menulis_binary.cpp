#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
//menulis file binary
    fstream fileku;
    int number = 78345610;

    fileku.open("data.bin", ios::out | ios::binary);
    fileku.write(reinterpret_cast<char*>(&number), sizeof(number));
    cout << "penulisan file berhasil" << endl;
    fileku.close();

   // membaca file binary
    int hasil;
    fileku.open("data.bin", ios::in | ios::binary);
    fileku.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    cout << "besar integer : " << sizeof(hasil) << endl;
    cout << hasil << endl;

    cin.get();
    return 0;
}
