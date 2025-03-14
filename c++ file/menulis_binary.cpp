#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    //fstream fileku;
    int number = 769804;

    /*fileku.open("data.bin", ios::out | ios::binary);
    fileku.write(reinterpret_cast<char*>(&number), sizeof(number));
    cout << "penulisan file berhasil" << endl;
    fileku.close();*/

    fstream fileku;
    int hasil;
    fileku.open("data.bin", ios::in | ios::binary);
    fileku.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    cout << "besar integer : " << sizeof(hasil) << endl;
    cout << hasil << endl;

    cin.get();
    return 0;
}
