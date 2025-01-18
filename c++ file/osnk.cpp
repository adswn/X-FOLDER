#include <iostream>
using namespace std;


bool dua_mata(vektor<int> A, int kiri, int kanan) {
    if (kiri == kanan){
        return(A[kiri] == 0);
    }else{
        int mid = (kiri + kanan)/2;
        if (A[mid] < 0){
            return dua_mata(A,kiri, mid-1);
        }else if (A[mid] > 0) {
            return dua_mata(A,mid+1,kanan);
        } else{
            return false;
        }
    }
}
    
    

