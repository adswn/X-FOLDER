#include <iostream>
using namespace std;

int main () {
    int a = 3;
    int b = 4;

    bool hasil;

    // operator logika not, and, or

     // logika not
     hasil = !(a == 3);

    //logika and
    cout << "untuk and";
    hasil = (a == 3) and (b == 4);
    cout << hasil << endl;
    hasil = (a == 2) and (b == 4);
    cout << hasil << endl;
    hasil = (a == 3) and (b == 6);
    cout << hasil << endl;
    hasil = (a == 5) and (b == 8);
    cout << hasil << endl;

     cout << hasil << endl;

     cin.get();
     return 0;


}