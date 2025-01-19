#include <iostream>
using namespace std;

double luas_segitiga(double p, double l){
    double luas = p * l;
    return luas ;
}

double keliling_segitiga(double p, double l){
    double keliling = 2 *(p + l);
    return keliling;
}

void tampilkan_luas (double p, double l){
    cout << "luas: ";
    cout << luas_segitiga(p, l) << endl;
}

 void tampilkan_keliling (double p, double l){
    cout << "keliling: ";
    cout << keliling_segitiga(p, l) << endl;
 }


int main(){

    double panjang, lebar;
    cout << "panjang:";
    cin >> panjang;
    cout << "lebar:";
    cin >> lebar;

    tampilkan_luas(panjang, lebar);
    tampilkan_keliling(panjang, lebar);
    cin.get();
    return 0;
}
