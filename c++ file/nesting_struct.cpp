#include <iostream>
#include <string>
using namespace std;

struct aktor{
    string nama;
    int umur;
    
};

struct film{
    string judul;
    string genre;
    int tahun;

    aktor pemeran_1;
    aktor pemeran_2;
};



int main(){
   aktor aktor1, aktor2;
   film film1;

   aktor1.nama = "azhar lucky";
   aktor1.umur = 20;

    aktor2.nama = "boby kertanegara";
    aktor2.umur = 15;

    film1.judul = "pembasmi tikus";
    film1.genre = "aksi";
    film1.tahun = 2025;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    cout << film1.judul << endl;
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl;

    cin.get();
    return 0;
}
