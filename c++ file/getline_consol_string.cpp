#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat_input;

    //getline pada string
    cout << "masukan kalimat: ";
    getline(cin, kalimat_input);
    cout << "kalimat yang diinput: " << kalimat_input << endl;

        // mencari posisi string
        int posisi = 0;
        int jumlah = 0;

        while(true){
            posisi = kalimat_input.find(" ", posisi + 1);
            jumlah++;
            if(posisi < 0){
                break;
            }
        }
        cout << "jumlah kata: " << jumlah << endl;
    cin.get();
    return 0;
}
