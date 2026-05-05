#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (default)
    Kendaraan() {
        id = 0;
        nama = "Tidak diketahui";
    }

    // 2. Constructor dengan parameter id
    Kendaraan(int iId) {
        id = iId;
        nama = "Tidak diketahui";
    }

    // 3. Constructor dengan parameter nama
    Kendaraan(string iNama) {
        id = 0;
        nama = iNama;
    }

    // 4. Constructor dengan parameter lengkap
    Kendaraan(int iId, string iNama) {
        id = iId;
        nama = iNama;
    }

    // Method untuk menampilkan data
    void tampilkan() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "-------------------------" << endl;
    }
};

