#include <iostream>
#include <string>
// Ambil file dari anggota untuk menggabungkan ke project utama 
#include "datasiswa.cpp"
#include "mapel.cpp"
#include "dataNilai.cpp"
#include "cari_sort.cpp"

int main(){
    // Pembuatan pilihan menu utama dari sistem akademik sederhana
    int pilih;
    do {
        cout << "\n===== SISTEM AKADEMIK SEDERHANA ====+\n";
        cout << "1. Data Siswa\n";
        cout << "2. Data Mata Pelajaran\n";
        cout << "3. Jadwal Pelajaran\n";
        cout << "4. Input dan Lihat Nilai\n";
        cout << "5. Cari Data Siswa\n";
        cout << "6. Urutkan Data\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        // Memanggil funsi dari file anggota untuk mengelola data siswa
        switch(pilih) {
            case 1: menuSiswa(); break;
            case 2: menuMapel(); break;
            case 3: menuJadwal(); break;
            case 4: MenuNilai(); break;
            case 5: cariSiswa(); break;
            case 6: urutkanData(); break;
            case 0: cout << "Keluar...\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while(pilih !=0 );

    return 0;
}