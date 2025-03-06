#include <iostream>
#include <string>

using namespace std;
int main(){
    string kalimat_1 = "danu sukanya makan kecubung";
    string kalimat_2 = "saya makan nasi goreng";

    cout <<"1. " << kalimat_1 << endl;
    cout <<"2. " << kalimat_2 << endl;

    // subsring: mengambil string dari tengah-tengah
    cout <<kalimat_1.substr(5,7) << " ";
    cout <<kalimat_2.substr(0,4) << endl;

    //mencari posisi 
    cout << "posisi kalimat 1: ";  
    cout <<kalimat_1.find("makan") << endl;
    cout << "posisi kalimat 2: ";
    cout <<kalimat_2.find("goreng") << endl;

    int a = kalimat_1.find("c");
    cout << a << endl;
    cout <<kalimat_1.find("c", a + 1) << endl;

    //mencari dari belakang

    cout << kalimat_2.rfind("a") << endl;

    kalimat_1.insert(5, "adalah ");
    cout << kalimat_1 << endl;
    cin.get();
    return 0;
}
 