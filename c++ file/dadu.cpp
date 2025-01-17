#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    char lanjut;
    while(true){
        cout << "lempar dadu? (y/n) ";
        cin >> lanjut;

        if (lanjut == 'n'){
            break;
        } else if (lanjut == 'y'){
            cout << "angka dadu: " << (rand() % 6) + 1 << endl;
        } else {
            cout << "input tidak valid" << endl;

        }
    }
    
    return 0;
}
