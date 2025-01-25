#include <iostream>

using namespace std;

double volume_kubus(double p = 2, double l = 2, double t = 2);

int main(){
    cout << "volume kubus 1: " << volume_kubus(2, 3, 4) << endl;
    cout << "volume kubus 2: " << volume_kubus(3, 4) << endl;
    cout << "volume kubus 3: " << volume_kubus(5) << endl;
    cout << "volume kubus 4: " << volume_kubus() << endl;
    cin.get();
    return 0;
}

double volume_kubus(double p, double l, double t){
    return p*l*t;
}
