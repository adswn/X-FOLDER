#include <iostream>
#include <array>
using namespace std;

int main(){

   /* int nilaiArray [6]= {0,1,2,3,4,5};
    for(int nilai: nilaiArray){
        cout << "alamat = " << &nilai << " nilainya : " << nilai << endl;
    }

    cout << endl;
    for(int &nilaiRef : nilaiArray){
    nilaiRef *= 2;
    cout << "alamat = " << &nilaiRef << " nilainya : " << nilaiRef << endl;
    }*/

    array<int , 6> nilaiArray = {0,1,2,3,4,5};
    for(int nilai: nilaiArray){
        cout << "alamat = " << &nilai << " nilainya : " << nilai << endl;
    }
        cout << endl;

        for(int &nilaiRef : nilaiArray){
            nilaiRef *= 2;
        }
        cout << endl;

    for(int nilaiRef: nilaiArray){
        cout << "alamat = " << &nilaiRef << " nilainya : " << nilaiRef << endl;
    }
    cin.get();
    return 0;
}
