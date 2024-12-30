#include <iostream>
using namespace std;

int main() {

    int a = 5;

    while(a <= 10) {
        cout << "loop";
        cout << a << endl;
        a += 2;
        cout << "selesai" << endl;
    }

    cin.get();
    return 0;
}
