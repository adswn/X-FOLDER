#include <iostream>
using namespace std;

union name{
    int int_nama;
    char char_nama[6];
};

int main(){
    name nama;

    nama.int_nama = 1234789035;

    cout << "int nama: " << sizeof(nama.int_nama) << endl;
    cout << "char nama: " << nama.char_nama << endl;

    nama.char_nama[0] = 'a';
    nama.char_nama[1] = 'z';    
    nama.char_nama[2] = 'h';
    nama.char_nama[3] = 'a';    
    nama.char_nama[4] = 'r';

    cout << "int nama: " << nama.int_nama << endl;
    cout << "char nama: " << nama.char_nama << endl;
    cin.get();
    return 0;
}
