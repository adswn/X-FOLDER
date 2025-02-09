#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);
int main(){

    int a = 5;
    cout << "alamat a: " << &a << endl;
    cout << "nilai a: " << a << endl;

    //fungsi(&a);
    kuadrat(&a);
    cout << "nilai a: " << a << endl;

    cin.get();
    return 0;
}

void fungsi(int *b){
    cout << "alamat b: " << b << endl;
   cout << "nilai b: " << *b << endl; //derefencing
}

void kuadrat(int *valPtr){
   *valPtr = (*valPtr)*(*valPtr);
}
