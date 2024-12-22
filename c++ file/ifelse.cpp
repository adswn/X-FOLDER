#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "masukan angka = ";
    cin >> a;

    if (a == 7) {
        cout << "nilai benar 7" << endl;
    } else if(a == 10){
        cout << "nilai benar 10" << endl;
    }else {
        cout << "nilai yang anda masukan bukan 7 atau 10" << endl;
    }

    cin.get();
    return 0;
}