#include <iostream>
#include <fstream> //ofstream,ifstream,fstream
using namespace std;

int main(){
// ios::out = default, operasi output;
	// ios::app = menuliskan pada akhir baris;
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;

ofstream fileku;

fileku.open("data1.txt", ios::out);
fileku << "ini adalah penulisan dalam file external berdasarkan out" << endl;
cout << "penulisan file berhasil yang ke satu" << endl;
fileku.close();

fileku.open("data2.txt", ios::trunc);
fileku << "ini adalah penulisan dalam file external berdasarkan trunc" << endl;
cout << "penulisan file berhasil yang ke dua" << endl;
fileku.close();


fileku.open("data3.txt", ios::app);
fileku << "ini adalah penulisan dalam file external berdasarkan app" << endl;
cout << "penulisan file berhasil yang ke tiga" << endl;
fileku.close();



    cin.get();
    return 0;
}
