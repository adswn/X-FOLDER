#include <iostream>
using namespace std;

int pangkatIterasi(int a,int b){
    int hasil = a;
    for (int i = 1; i < b; i++){
        hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b){
    if (b <= 1){
        cout << "akhir rekursif\n";
        return a;
    } else{
        cout << "rekursif\n";
        return a * pangkatRekursif(a,b-1);
    }
}

int main(){
    int a;
    int b;

    cout << "masukan angka: ";
    cin >> a;
    cout << "masukan pangkat: ";
    cin >> b;
    cout << "hasil iterasi: " << pangkatIterasi(a, b) << endl;
    cout << "hasil rekursif: " << pangkatRekursif(a, b) << endl;
    
    
    cin.get();
    return 0;
}

