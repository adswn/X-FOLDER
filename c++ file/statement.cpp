#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "masukan angka =";
    cin >> a;

    if (a) {
        cout << "yang anda masukan benar" << endl; 
    }

    cout << a << endl;

    cin.get();
    return 0;
}