#include <iostream>
using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout << "masukan nilai pertama";
    cin >> a;
    cout << "pilih operator +,-,*/";
    cin >> aritmatika;
    cout << "masukan nilai kedua";
    cin >> b;

    cout << "hasil perhitungan \n\n";
    cout << a << aritmatika << b;

    if (aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-') {
        hasil = a - b;
    }else if (aritmatika == '*') {
        hasil = a * b;
    } else if (aritmatika == '/') {
        hasil = a / b;
    } else {
        cout << "operator yang anda pilih salah" << endl;
    }
    cout << "=" << hasil << endl;
    
    cin.get();
    return 0;
}
