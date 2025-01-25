#include <iostream>

using namespace std;

int x = 20;

int memanggil_global(){
    return x;
}

int memanggil_local(){
    int x = 50;
    return x;
}

int main(){

    cout <<"ini langsung: " << x << endl;
    cout << "memanggil global: " << memanggil_global() << endl;
    int x = 10;
    cout <<"ini local: " << x << endl;
    cout << "memanggil local: " << memanggil_local() << endl;
    {
        int x = 5;
        cout << "ini block: " << x << endl;
        cout << "memanggil local: " << memanggil_local() << endl;
    }

    cout << "ini local: " << x << endl;
    cin.get();
    return 0;
}
