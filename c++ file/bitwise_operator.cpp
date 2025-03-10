#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void printBinary(unsigned short val, string name){
    cout << name << " = " << bitset<8>(val) << endl;
}

int main(){
    unsigned short a = 7;
    unsigned short b = 5;
    unsigned short c;

    cout << "\n& - Bitwise AND operator" << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");    
    printBinary(c, "c");

    cout << "c = " << c << endl;

    cout << "\n| - Bitwise OR operator" << endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");    
    printBinary(c, "c");

    cout << "c = " << c << endl;

    cout << "\n^ - Bitwise XOR operator" << endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");    
    printBinary(c, "c");

    cout << "c = " << c << endl;

    cout << "\n~ - Bitwise NOT operator" << endl;
    c = ~a;
    printBinary(a, "a");
    printBinary(c, "c");

    cout << "c = " << c << endl;

    cout << "\n<< - Bitwise SHL operator" << endl;
    c = a << 2;
    printBinary(a, "a");  
    printBinary(c, "c");

    cout << "c = " << c << endl;

    cout << "\n>> - Bitwise SHR operator" << endl;
    c = a >> 2;
    printBinary(a, "a"); 
    printBinary(c, "c");

    cout << "c = " << c << endl;
    



    cin.get();
    return 0;
}

// bitwise operator
// &	AND	Bitwise AND
// |	OR	Bitwise inclusive OR
// ^	XOR	Bitwise exclusive OR
// ~	NOT	
// <<	SHL	Shift bits left
// >>	SHR	Shift bits right
