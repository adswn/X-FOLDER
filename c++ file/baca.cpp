#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct siswa{
    int NIS;
    string nama;
    string kelas;
};

siswa ambilData(int &posisi, fstream &Fileku){

    siswa bufferData;
    Fileku.seekp((posisi-1)*sizeof(siswa));
    Fileku.read(reinterpret_cast<char*>(&bufferData), sizeof(siswa));
    return bufferData;
};


int main(){
    fstream Fileku;
    siswa dataBaca;
    Fileku.open("dataku.bin", ios::in | ios::binary);
    cout << "berhasil" << endl;
    int posisi = 2;
    dataBaca = ambilData(posisi, Fileku);

    cout << "NIS: " << dataBaca.NIS << endl;
    cout << "Nama: " << dataBaca.nama << endl;
    cout << "Kelas: " << dataBaca.kelas << endl;

    Fileku.close();

    cin.get();
    return 0;
}
