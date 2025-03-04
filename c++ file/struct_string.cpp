#include <iostream>
#include <string>
using namespace std;

//struct adalah data yang di bentuk oleh beberapa data yang berbeda

struct buah{
    string nama;
    string NIM;
    string jurusan;
    int semester;
};
int main(){
    buah a;


    a.nama = "Rana";
    a.NIM = "A11.2018.11111";
    a.jurusan = "Teknik Informatika";
    a.semester = 3;

    cout << "Nama : " << a.nama << endl;
    cout << "NIM : " << a.NIM << endl;
    cout << "Jurusan : " << a.jurusan << endl;
    cout << "Semester : " << a.semester << endl;


    cin.get();
    return 0;
}
