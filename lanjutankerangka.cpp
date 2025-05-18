#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

struct pasien
{
    char nama_pasien[100], keluhan[50];
    int umur_pasien,id_pasien, tgl_pasien;
    pasien *next;
};
pasien *kepalapasien = NULL, *bantupasien, *nodepasien, *hapuspasien;

struct dokter
{
    char nama_dokter[100], spesialis[50];
    int umur_dokter, id_dokter, tgl_dokter;
    dokter *next;
};
dokter *kepaladokter = NULL, *bantudokter, *nodedokter, *hapuskunjungan;

bool cekidpasiendouble(int id_pasien) {
    if (kepalapasien == NULL) {
        return false;
    }

    bantupasien = kepalapasien;
    while (bantupasien != NULL) {
        if (bantupasien->id_pasien == id_pasien) {
            return true;}
        bantupasien = bantupasien->next;}
    return false;
}

bool cekdokterdouble(int id_dokter) {
    if (kepaladokter == NULL) {
        return false;
    }

    bantudokter = kepaladokter;
    while (bantudokter != NULL) {
        if (bantudokter->id_dokter == id_dokter) {
            return true;}
        bantudokter = bantudokter->next;}
    return false;
}

void Linkedlist_pasien(char nama_pasien[100], char keluhan[50], int umur_pasien, int id_pasien, int tgl_pasien)
{
    if (cekidpasiendouble(id_pasien)) {
    cout << "Error: ID Pasien " << id_pasien << " sudah terdaftar dalam sistem!" << endl;
    cout << "Silakan gunakan ID pasien yang berbeda." << endl;
    cin.get();
    return;}

    kepalapasien = new pasien();
    strcpy(kepalapasien->nama_pasien, nama_pasien);
    strcpy(kepalapasien->keluhan, keluhan);
    kepalapasien->umur_pasien = umur_pasien;
    kepalapasien->id_pasien = id_pasien;
    kepalapasien->tgl_pasien = tgl_pasien;
    kepalapasien->next = NULL;
}

void Linkedlist_dokter(char nama_dokter[100], char spesialis[50], int umur_dokter, int id_dokter, int tgl_dokter)
{
    if (cekdokterdouble(id_dokter)) {
    cout << "Error: ID Dokter " << id_dokter << " sudah terdaftar dalam sistem!" << endl;
    cout << "Silakan gunakan ID dokter yang berbeda." << endl;
    cin.get();
    return;}

    kepaladokter = new dokter();
    strcpy(kepaladokter->nama_dokter, nama_dokter);
    strcpy(kepaladokter->spesialis, spesialis);
    kepaladokter->umur_dokter = umur_dokter;
    kepaladokter->id_dokter = id_dokter;
    kepaladokter->tgl_dokter = tgl_dokter;
    kepaladokter->next = NULL;
}

bool tambahakhir_pasien(char nama_pasien[100], char keluhan[50], int umur_pasien, int id_pasien, int tgl_pasien)
{
    if (cekidpasiendouble(id_pasien)) {
    cout << "Error: ID Pasien " << id_pasien << " sudah terdaftar dalam sistem!" << endl;
    cout << "Silakan gunakan ID pasien yang berbeda." << endl;
    cin.get();
    return false;}
    
    nodepasien = new pasien();
    strcpy(nodepasien->nama_pasien, nama_pasien);
    strcpy(nodepasien->keluhan, keluhan);
    nodepasien->umur_pasien = umur_pasien;
    nodepasien-> id_pasien =  id_pasien;
    nodepasien-> tgl_pasien =  tgl_pasien;
    nodepasien->next = NULL;

    if (kepalapasien == NULL){
        kepalapasien = nodepasien;}
    else
    {
        bantupasien = kepalapasien;
        while (bantupasien->next != NULL){
            bantupasien = bantupasien->next;}
        bantupasien->next = nodepasien;}
        return true;
}

bool tambahakhir_dokter(char nama_dokter[100], char spesialis[50], int umur_dokter, int id_dokter, int tgl_dokter)
{
    if (cekdokterdouble(id_dokter)) {
    cout << "Error: ID Dokter " << id_dokter << " sudah terdaftar dalam sistem!" << endl;
    cout << "Silakan gunakan ID dokter yang berbeda." << endl;
    cin.get();
    return false;}

    nodedokter = new dokter();
    strcpy(nodedokter->nama_dokter, nama_dokter);
    strcpy(nodedokter->spesialis, spesialis);
    nodedokter->umur_dokter = umur_dokter;
    nodedokter-> id_dokter =  id_dokter;
    nodedokter-> tgl_dokter =  tgl_dokter;
    nodedokter->next = NULL;

    if (kepaladokter == NULL){
        kepaladokter = nodedokter;}
    else
    {
        bantudokter = kepaladokter;
        while (bantudokter->next != NULL){
            bantudokter = bantudokter->next;}
        bantudokter->next = nodedokter;}
        return true;
}

void simpanpasienkefile() {
    FILE *ptr = fopen("data_pasien.txt", "w");
    if (ptr == NULL) {
        cout << "Gagal membuka file untuk pasien.\n";
        return;}

    pasien *temp = kepalapasien;
    while (temp != NULL) {
        fprintf(ptr, "%d|%s|%d|%d|%s\n", temp->id_pasien, temp->nama_pasien, temp->umur_pasien, temp->tgl_pasien, temp->keluhan);
        temp = temp->next;}

    fclose(ptr);
    cout << "Data pasien berhasil disimpan ke file.\n";
    cin.get();
}

void simpandokterkefile() {
    FILE *ptr = fopen("data_dokter.txt", "w");
    if (ptr == NULL) {
        cout << "Gagal membuka file untuk dokter.\n";
        return;}

    dokter *temp = kepaladokter;
    while (temp != NULL) {
        fprintf(ptr, "%d|%s|%d|%d|%s\n", temp->id_dokter, temp->nama_dokter, temp->umur_dokter, temp->tgl_dokter, temp->spesialis);
        temp = temp->next;}

    fclose(ptr);
    cout << "Data dokter berhasil disimpan ke file.\n";
    cin.get();
}

void loadpasiendarifile() {
    
}

void loaddokterdarifile() {

}

void tampilpasien() {
    
}

void tampildokter(){

}

void tampilkandata(){
    
}

void hapus_pasien(char cari_pasien[100]) {

}

void hapus_dokter(char cari_dokter[100]) {
    
}

int main(){
    int pilih, umur_pasien, id_pasien, umur_dokter, id_dokter, tgl_pasien, tgl_dokter;
    char nama_pasien[100], nama_dokter[100], keluhan[50], spesialis[50];
    loadpasiendarifile();
    loaddokterdarifile();
    
    do
    {
        system("cls");
        cout << "--------------Menu--------------" << endl;
        cout << "1. Buat Linked List pasien" << endl;
        cout << "2. Buat Linked List dokter" << endl;
        cout << "3. Tambah pasien di Akhir " << endl;
        cout << "4. Tambah dokter di Akhir " << endl;
        cout << "5. Hapus pasien" << endl;
        cout << "6. Hapus dokter" << endl;
        cout << "7. cari pasien" << endl;
        cout << "8. cari dokter" << endl;
        cout << "9. list kunjungan" << endl;
        cout << "10. tampilkan data" <<  endl;
        cout << "11. keluar program" <<  endl;
        cout << "pilih menu: ";
        cin >> pilih;
        cin.ignore();
    
        switch (pilih)
        {
        case 1:
            if (kepalapasien != NULL)
            {
                cout << "Linked list sudah di buat" << endl ;
                cin.get();
                break;
            }
            cout << "nama pasien: ";
            cin.getline(nama_pasien, 100);
            cout << "keluhan pasien: ";
            cin.getline(keluhan, 50);
            cout << "umur pasien: ";
            cin >> umur_pasien;
            cout << "id pasien: ";
            cin >> id_pasien;
            cout << "tanggal dateng pasien: ";
            cin >> tgl_pasien;
            Linkedlist_pasien(nama_pasien, keluhan, umur_pasien, id_pasien, tgl_pasien);
            cout << "Linked list berhasil dibuat!\n";
            simpanpasienkefile();
            cin.get();
            system("cls");
            break;

        case 2:
        if (kepaladokter != NULL)
        {
            cout << "Linked list sudah di buat" << endl ;
            cin.get();
            break;
        }
        cout << "nama dokter: ";
        cin.getline(nama_dokter, 100);
        cout << "spesialis dokter: ";
        cin.getline(spesialis, 50);
        cout << "umur dokter: ";
        cin >> umur_dokter;
        cout << "id dokter: ";
        cin >> id_dokter;
        cout << "tanggal dateng dokter: ";
        cin >> tgl_dokter;
        Linkedlist_dokter(nama_dokter, spesialis, umur_dokter, id_dokter, tgl_dokter);
        cout << "Linked list berhasil dibuat!\n";
        simpandokterkefile();
        cin.get();
        system("cls");
        break;

        case 3:
            cout << "nama pasien: ";
            cin.getline(nama_pasien, 100);
            cout << "keluhan pasien: ";
            cin.getline(keluhan, 50);
            cout << "umur pasien: ";
            cin >> umur_pasien;
            cout << "id pasien: ";
            cin >> id_pasien;
            cout << "tanggal dateng pasien: ";
            cin >> tgl_pasien;
            cin.ignore();
            if (tambahakhir_pasien(nama_pasien, keluhan, umur_pasien, id_pasien, tgl_pasien))
            {
                simpanpasienkefile();
            }
            break;

        case 4:
            cout << "nama dokter: ";
            cin.getline(nama_dokter, 100);
            cout << "spesialis dokter: ";
            cin.getline(spesialis, 50);
            cout << "umur dokter: ";
            cin >> umur_dokter;
            cout << "id dokter: ";
            cin >> id_dokter;
            cout << "tanggal dateng dokter: ";
            cin >> tgl_dokter;
            if (tambahakhir_dokter(nama_dokter, spesialis, umur_dokter, id_dokter, tgl_dokter)){
                simpandokterkefile();}
            break;

        case 5:
            char nama_pasien[100];
            cout << "Masukkan nama pasien yang ingin dihapus: ";
            cin.getline(nama_pasien, 100);
            hapus_pasien(nama_pasien);
            break;

        case 6:
            char nama_dokter[100];
            cout << "Masukkan nama pasien yang ingin dihapus: ";
            cin.getline(nama_dokter, 100);
            hapus_dokter(nama_dokter);
            break;

        case 7:
            break;

        case 8:
            break;

        case 9:
            break;

        case 10:
            tampilkandata();
            break;

        case 11:
            cout << "keluar dari program" << endl;
            break;

        default:
        cout << "pilihlah angka sesuai menu";
        cin.get();
            break;
        }
    } while (pilih != 11);
}