#include <iostream>
using namespace std;

int main(){

    int a = 5;

    cout << "alamat dari a: " << &a << endl;
    cout << "nilai dari a: " << a << endl << endl;

    int &b = a;

    cout << "alamat dari b: " << &b << endl;
    cout << "nilai dari b: " << b << endl << endl;

    int &c = a;

    cout << "alamat dari c: " << &c << endl;
    cout << "nilai dari c: " << c << endl << endl;

    a = 10;
    cout << "nilai a :" << a << endl;
    cout << "nilai b :" << b << endl;
    cout << "nilai c :" << c << endl << endl;

    b = 50;
    cout << "nilai a :" << a << endl;
    cout << "nilai b :" << b << endl;
    cout << "nilai c :" << c << endl;

    cin.get();
    return 0;
}
