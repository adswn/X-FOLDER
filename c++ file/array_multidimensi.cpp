#include <iostream>
using namespace std;

void printArray(int *ptrarray, int baris, int kolom) {
    int index = 0;
    for(int i = 0; i < baris; i++) {
        cout << "[ ";
        for(int j = 0; j < kolom; j++) {
            cout << *(ptrarray + index) << " ";
            index++;
}
    }
    cout << "]"<< endl;
}
int main(){
     const int baris= 2;
   const int kolom = 2;
    int ar [baris][kolom]= {1,2,3,4};
  

   printArray(*ar, baris, kolom);
    cin.get();
    return 0;
}
