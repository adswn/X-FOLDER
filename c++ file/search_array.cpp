#include <iostream>
#include <algorithm>
#include <array> 

const size_t arraySize = 13;
void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main(){
    std::array <int, arraySize> angka = {9,4,6,7,8,1,3,2,5,0,10,14,18};

    printArray(angka);

    int cariAngka;
    bool ketemu;

    std::cout << "mencari angka pada array : \n";
    std::cin >> cariAngka;

    std::sort(angka.begin(), angka.end());
    ketemu = std::binary_search(angka.begin(), angka.end(), cariAngka);

    if(ketemu){
        std::cout << "ketemu" << std:: endl;
    }else{
        std::cout << "tidak ketemu" << std::endl;
    }


    std::cin.get();
    return 0;
}
