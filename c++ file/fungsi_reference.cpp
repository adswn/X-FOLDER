#include <iostream>
using namespace std;

void fungsi(int &);
   
void kuadrat(int &n);
int main(){
    int a = 60;
    cout << "nilai a adalah = " << a << endl;
    cout << "alamat a adalah = " << &a << endl;

    //fungsi(a);
    kuadrat(a);
    cout << "nilai a adalah = " << a << endl;

    cin.get();
    return 0;
}

void fungsi(int &b){
    b = 20;
    cout << "nilai b adalah = " << b << endl;
    cout << "alamat b adalah = " << &b << endl;
}

void kuadrat(int &nilaiK){
    nilaiK = nilaiK*nilaiK;
}

