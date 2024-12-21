#include <iostream>
using namespace std;

int main () {

    int x = 45;
    int z = 56;

   bool hasil;

   // operator logika not, and, or

   hasil = !(x == 45);

   cout << hasil << endl;

   // and
   cout << "ini yang and \n";
   hasil = (x == 45) && (z == 56); // true and true
   cout << hasil << endl;
   hasil = (x == 49) && (z == 56); // false and true
   cout << hasil << endl;
   hasil = (x == 45) && (z == 57); // true and false
   cout << hasil << endl;
   hasil = (x == 48) && (z == 50); // false and false
   cout << hasil << endl;
   
   // or
   cout << "ini yang or \n";
     hasil = (x == 45) || (z == 56); // true and true
   cout << hasil << endl;
   hasil = (x == 49) || (z == 56); // false and true
   cout << hasil << endl;
   hasil = (x == 45) || (z == 57); // true and false
   cout << hasil << endl;
   hasil = (x == 48) || (z == 50); // false and false
   cout << hasil << endl;

   cin.get();
   return 0;
}