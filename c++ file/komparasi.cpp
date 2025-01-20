#include <iostream>

using namespace std;

int main () {

    int a = 3;
    int b = 1;
    int c = 5;
    int d = 10;

    bool hasil1, hasil2, hasil3, hasil4;

    //sebanding
    hasil1 = (d == b);
    // tidak sebanding
    hasil2 = (a != c);

    // kurang dari
    hasil1 = (c < d);
    // lebih dari
    hasil2 = (c > b);

    hasil3 = (a <= d);
    hasil4 = (c >= a);

    cout << "ini hasil 1 : ";
    cout << hasil1 << endl;

    cout << "ini hasil 2 : ";
    cout << hasil2 << endl;

    cout << "ini hasil 3 : ";
    cout << hasil3 << endl;

    cout << "ini hasil 4 : ";
    cout << hasil4 << endl;

    cin.get();
    return 0;
}