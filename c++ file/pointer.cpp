#include <iostream>
using namespace std;

int main(){

    int a = 5;

    //pointer
    int *aPtr = nullptr;
    aPtr = &a;

    cout << "menampilkan nilai a = " << a << endl;
    cout << "menampilkan alamat a = " << aPtr << endl;

    //mengambil data dari sebuah poiter
     a = 15;

    cout << "mengambil data dari aPtr: " << *aPtr << endl;

    cin.get();
    return 0;
}
