#include <iostream>
using namespace std;

enum karoseri{adiPutro, laksana, morodadi, tenrem, newArmada = 4, raharuSentosa};

int main(){

    karoseri po_bus;

    po_bus = raharuSentosa;

    if(po_bus == morodadi){
        cout << "Bus ini adalah buatan karoseri Morodadi" << endl;
    }else if(po_bus == tenrem){
        cout << "Bus ini adalah buatan karoseri tenrem" << endl;
    }else{
        cout << "bus ini baru casis saja" << endl;
    };

    cout << po_bus << endl;

    cin.get();
    return 0;
}
