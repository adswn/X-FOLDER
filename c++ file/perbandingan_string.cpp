#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    string tebak_nama("joko");

    while(true){
        cout << "tebak nama : ";
        cin >> input;
        cout << input;

        if(input == tebak_nama){
            cout << " tebakan anda sangat benar" << endl;
            break;
        }
        cout << "tebakan anda salah" << endl;
    }
    cout << "progam selesai" << endl;
    cin.get();
    return 0;
}
