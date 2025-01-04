#include <iostream>
using namespace std;

int main(){

    cout << "loop1 \n";
    for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }

      cout << "loop2 \n";
    for (int i = 1; i >= -10; i--){
        cout << i << endl;
    }

      cout << "loop3 \n";
    for (int i = 1; i <= 10; i*= 3){
        cout << i << endl;
    }

      cout << "loop4 \n";

      int total = 0;
    for (int i = 1; i <= 10; total += i, i++){
     
        cout << i << "||" << total << endl;
    }


    cin.get();
    return 0;
}
