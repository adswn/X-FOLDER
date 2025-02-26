#include <iostream>
#include <array>

using namespace std;
const int kolom = 3;
const int baris = 2;

void printArray (  array < array <int, kolom> , baris> &nilaiArray){
for(array <int, kolom> vectorBaris : nilaiArray){ 
    cout << "[ ";
    for(int nilaikolom: vectorBaris){
        cout << nilaikolom << " ";
    }
    cout << "]"<< endl;
}

}

int main(){
   
    array < array <int, kolom> , baris> nilaiA = {0,1,2,3,4,5};

    /*cout << nilaiA [0][0] << "";
    cout << nilaiA [0][1] << "";
    cout << nilaiA [0][2] << "" << endl;

    cout << nilaiA [1][0] << "";
    cout << nilaiA [1][1] << "";
    cout << nilaiA [1][2] << "" << endl;*/

    printArray(nilaiA);

    cin.get();
    return 0;
}
