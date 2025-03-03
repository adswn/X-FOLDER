#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat_1 = "tapi di tolak lagi dan lagi!!!";
    string kalimat_2 = "sialan, dafa nembak cewek lagi";

    cout <<"1. " << kalimat_1 << endl;
    cout <<"2. " << kalimat_2 << endl;

    // swap string
    kalimat_1.swap(kalimat_2);
    cout << "swap string: " << endl;
    cout <<"1. " << kalimat_1 << endl;
    cout <<"2. " << kalimat_2 << endl;

    // replace string, mengganti string
    kalimat_1.replace(20, 5, "inisial s");
    kalimat_2.replace(
		kalimat_2.find("gi"),
		25,
		"nsung gamon"
	);
    cout << "replace string: " << endl;
    cout <<"1. " << kalimat_1 << endl;
    cout <<"2. " << kalimat_2 << endl;

    // insert string
    kalimat_1.insert(20, " dan lagi ");
    cout << "insert string: " << endl;
    cout <<"1. " << kalimat_1 << endl;
    cout <<"2. " << kalimat_2 << endl;

    cin.get();
    return 0;
}
