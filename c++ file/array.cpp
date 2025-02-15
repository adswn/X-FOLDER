#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 5> nilai;
    for(int i = 0; i <= 4; i++){
        cout << "nilai [" << i << "] = " << nilai[i];
       cout << " alamat = " << &nilai[i] << endl;
    }

    cout << endl;
    cout << "ukuran = " << nilai.size() << endl;

    cout << "alamat awal = " << nilai.begin() << endl;
    cout << "alamat akhir = " << nilai.end() << endl;

    cin.get();
    return 0;
}
