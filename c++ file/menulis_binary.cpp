#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream fileku;
    int number = 1;

    fileku.open("data.bin", ios::out | ios::binary);
    fileku.write(reinterpret_cast<char*>(&number), sizeof(number));
    cout << "penulisan file berhasil" << endl;
    fileku.close();

    cin.get();
    return 0;
}
