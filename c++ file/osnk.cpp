#include <iostream>
#include <vector>
using namespace std;


bool dua_mata(vector<int> A, int kiri, int kanan) {
    if (kiri > kanan) {
        return false; // Base case when the range is invalid
    }
    int mid = (kiri + kanan) / 2;
    if (A[int] == 0) {
        return true; // Found zero
    } else if (A[int] < 0) {
        return dua_mata(A, int + 1, kanan); // Search in the right half
    } else {
        return dua_mata(A, kiri, int - 1); // Search in the left half
    }
}
    
    


    
    
