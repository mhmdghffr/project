#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

struct pasien {
    char nama_pasien[100], keluhan[50];
    int umur_pasien,id_pasien, tgl_pasien;
    pasien *next;
}
pasien *kepalapasien = NULL, *bantupasien, *nodepasien, *hapuspasien;

struct dokter {
    char nama_dokter[100], spesialis[50];
    int umur_dokter, id_dokter, tgl_dokter;
    dokter *next;
}
dokter *kepaladokter = NULL, *bantudokter, *nodedokter, *hapuskunjungan;

void daftar_pasien() {

}

void daftar_dokter(){

}

void tambah_pasien() {

}

void tambah_dokter()
{

}

void simpan_file_pasien() {

}

void simpan_file_dokter() {

}

void load_file_pasien() {

}

void load_file_dokter() {

}

void tampil_dokter() {

}

void tampil_pasien{} {

}

int main() {
    do {
        system("cls");
        cout << "--------------Menu--------------" << endl;
        cout << "1. Buat daftar pasien" << endl;
        cout << "2. Buat daftar List dokter" << endl;
        cout << "3. Tambah pasien di Akhir " << endl;
        cout << "4. Tambah dokter di Akhir " << endl;
        cout << "5. Hapus pasien" << endl;
        cout << "6. Hapus dokter" << endl;
        cout << "7. list kunjungan" << endl;
        cout << "8. tampilkan data" <<  endl;
        cout << "9. keluar program" <<  endl;
        cout << "pilih menu: ";
        cin >> pilih;
        cin.ignore();

        switch (pilih) {
            case 1:
                break;
            
            case 2:
                break;

            case 3: 
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;
            
            case 8:
                break;

            case 9:
                break;

        }

    }
}