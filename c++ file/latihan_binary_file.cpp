#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct siswa{
    int NIS;
    string nama;
    string kelas;
};

siswa ambilData(int posisi, fstream &Fileku){

    siswa bufferData;
    Fileku.seekp((posisi-1)*sizeof(siswa));
    Fileku.read(reinterpret_cast<char*>(&bufferData), sizeof(siswa));
    return bufferData;
}

void menulisData(siswa &data,fstream &Fileku){
    Fileku.write(reinterpret_cast<char*>(&data), sizeof(siswa));
}

void menulisDataBYPS(siswa &bufferData, int posisi, fstream &Fileku){
    Fileku.seekg((posisi-1)*sizeof(siswa));
    Fileku.write(reinterpret_cast<char*>(&bufferData), sizeof(siswa));
}


int main(){
    fstream Fileku;
    Fileku.open("dataku.bin", ios::trunc | ios::out | ios:: in| ios::binary);
    cout << "berhasil" << endl;

    siswa siswa1, siswa2, siswa3, output;

    siswa1.NIS = 1165;
    siswa1.nama = "Budi";
    siswa1.kelas = "XI soshum 1";

    siswa2.NIS = 1166;
    siswa2.nama = "Andi";
    siswa2.kelas = "XI soshum 3";

    siswa3.NIS = 1167;
    siswa3.nama = "Caca";
    siswa3.kelas = "XI teknik 2";

    menulisData(siswa1, Fileku);
    menulisData(siswa2, Fileku);
    menulisData(siswa3, Fileku);

    siswa2.nama = "mario";
	menulisDataBYPS(siswa2,2,Fileku);
	
    
	output = ambilData(2,Fileku);

    siswa1.nama = "dafa";
    menulisDataBYPS(siswa1,1,Fileku);

    output = ambilData(1,Fileku);


    
	cout << output.NIS << endl;
	cout << output.nama << endl;
	cout << output.kelas << endl;


    Fileku.close();

  


    cin.get();
    return 0;
}
