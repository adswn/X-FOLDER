#include <iostream>
using namespace std;

int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

/*int tambah(int a, int b){
    int z;
    z = a + b;
    return z;
}*/

    void cetak(char input){
        cout << "ini dalam void \n";
        cout << input << endl;


    }
int main(){
  int input, hasil, a, b, hasil2;
    cout << "nilai kuadrat y: ";
    cin >> input;

    hasil = kuadrat(input);

    cout << hasil << endl;

   /* cout << "masukan nilai a: ";
    cin >> a;
    cout << "masukan nilai b: ";
    cin >> b;

    hasil2 = tambah(a,b);
    cout << hasil2 << endl;*/

    cetak(input);


    cin.get();
    return 0;
}
