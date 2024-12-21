#include <iostream>

using namespace std;

int main () {

    int a = 3;
    int b = 1;

    bool hasil1, hasil2;

    //sebanding
    hasil1 = (a == b);
    // tidak sebanding
    hasil2 = (a != b);

    // kurang dari
    hasil1 = (a < b);
    // lebih dari
    hasil2 = (a > b);

    hasil1 = (a <= b);
    hasil2 = (b >= a);

    cout << hasil1 << endl;
    cout << hasil2 << endl;

    cin.get();
    return 0;
}