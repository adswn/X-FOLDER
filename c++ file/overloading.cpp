#include <iostream>

using namespace std;

//overload basic
int menghitung_kotak(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

int menghitung_kotak(int sisi){
    int luas = sisi * sisi;
    return luas;
}

int menghitung_kotak(double sisi){
    return sisi*sisi;
}

int main(){
    cout << "luas kotak 3x4: " << menghitung_kotak(3,4) << endl;
    cout << "luas kotak 3x3: " << menghitung_kotak(3) << endl;
    cout << "luas kotak 2.7x2.7: " << menghitung_kotak(2.7) << endl;


    cin.get();
    return 0;
}
