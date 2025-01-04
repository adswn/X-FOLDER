#include <iostream>
using namespace std;

int main(){

 /*for(int i = 0; i <= 10; i++){
    if(i == 5) {
        //break;
        continue;
    }
    cout << i << endl;
 }
 cout << "selesai" << endl;*/

 int i= 0;
 while (i <= 10){
    i++;
    if(i == 5){
        continue;
    }
    cout << i << endl;
    
 }

 cout << "selesai" << endl;
 

    cin.get();
    return 0;
}
