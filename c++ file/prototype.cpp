#include <iostream>
using namespace std;

// prototype
double menghitung(double a, double b);
void soss(double x);


int main()
{
    int panjang, lebar, luas;
    cout << "panjang:";
    cin >> panjang;
    cout << "lebar:";
    cin >> lebar;
    
    luas = menghitung(panjang, lebar);
    soss(luas);
    cin.get();
    return 0;
}

double menghitung(double a, double b){
    return a * b;
}

void soss(double x){
   cout << "hasil : " << x << endl;
}

 