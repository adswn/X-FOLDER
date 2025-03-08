#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    string hasil1,hasil2,otput;

    hasil1 = "ini dia hasilnya";
    hasil2 = "yah, ini lah hasilnya";
    //hasil3 = "hasilnya sama";

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    //cout << "Masukkan nilai c: ";
   // cin >> c;
   

    otput = (a < b) ? hasil1 : hasil2;


   /* if (a < b){
        otput = hasil1;
    } else if (a > c){
        otput = hasil2;
    } else if(a == c){
        otput = hasil3;
    };*/

    cout << otput << endl;
 

    cin.get();
    return 0;
} 
