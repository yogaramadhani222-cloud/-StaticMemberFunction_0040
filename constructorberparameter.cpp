#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    mahasiswa(int nim, string nama); // Constructor dengan parameter
};


// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor dengan parameter dipanggil!" << endl;
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
}
int main()
{
    return 0;
}