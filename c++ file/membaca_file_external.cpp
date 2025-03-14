#include <iostream>
#include <fstream> //ofstream,ifstream,fstream
#include <string>
using namespace std;

int main(){
    ifstream myfile;
    string output, buffer;
    bool isdata = false;
    int no;
    string nama;
  
    myfile.open("data.txt", ios::in);
    while(!isdata){
        getline(myfile, buffer);
       output.append("\n" + buffer);
       if(buffer == "data"){
            isdata = true;
            
       }
        cout << output << endl;
    }getline(myfile,buffer);
	cout << buffer << endl;
	int jumlah_data = 0;
	while(!myfile.eof()){
		myfile >> no;
		myfile >> nama;

		cout << no << "\t" << nama << endl;
		jumlah_data++;
	}
	cout << "jumlah data = " << jumlah_data << endl;


    cin.get();
    return 0;
}
