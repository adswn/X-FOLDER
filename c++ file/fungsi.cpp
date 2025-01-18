#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x;
    int y;
    

    cout << "masukan fungsi x: ";
    cin >> x;

    cout << "masukan fungsi y: "; 
    cin >> y;

    

     char a = ceil(x);
    cout << "pembulatan ke atas x = " << a << endl;

     double b = cos(x);
    cout <<" cosinus x = " << b << endl;

     double c = exp(x);
    cout << "exponen x = " << c << endl;
    
     double d = fabs(x);
    cout << "nilai absolut float x = " << d << endl;

     double2
      e = floor(x);
    cout << "pembulatan ke bawah x = " << e << endl;

     float f = fmod(x, y);
    cout << "modulus dalam float x dan y = " << f << endl;

     double g = log(x);
    cout << "logaritma basis natural x = " << g << endl;

     double h = log10(x);
    cout << "logaritma basis 10 x = " << h << endl;

    double i = pow(x, y);
    cout << "pangkat x = " << i << endl;

    double j = sin(x);
    cout << "sinus x = " << j << endl;

    double k = sqrt(x);
    cout << "akar x = " << k << endl;

     double z = tan(x);
    cout << "tangen x = " << z << endl;


    
    cin.get();
    return 0;
}
