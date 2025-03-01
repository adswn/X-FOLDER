#include <iostream>
#include <string>

using namespace std;

int main(){

    string kata ("niki bus trans holiday");
    cout << kata << endl;

    cout << "nilai index ke 0 : " << kata[0] << endl;
    cout << "nilai index ke 1 : " << kata[1] << endl;
    cout << "nilai index ke 2 : " << kata[2] << endl;
    cout << "nilai index ke 3 : " << kata[3] << endl;

    //merubah karakter
    kata[3] = 'u';
    cout << kata << endl;

    //menyambung
    string kata1 = (kata + " po impian");
    cout << kata1 << endl;

    string kata2("yang ku semogakan");
    kata1.append(" " + kata2);
    cout << kata1 << endl;

    string kata3("aminnnnnnnn");
    kata2 += " " + kata3;
    cout << kata2 << endl;
    


    cin.get();
    return 0;
}
