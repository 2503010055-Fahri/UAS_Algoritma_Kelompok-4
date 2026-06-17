#include<iostream>
using namespace std;

void cariSiswa()
{
    if (jumlahSiswa == 0)
    {
        cout << "Belum ada data siswa.\n";
        return;
    }
    string keyword;
    cout << "Masukkan NIS atau Nama yang dicari: ";
    cin >> keyword;

    bool ditemukan = false;
    for (int i = 0; i < jumlahSiswa; i++)
    {
        if (daftarSiswa[i].nis == keyword || daftarSiswa[i].nama == keyword)
        {
            cout << "Ditemukan!\n";
            cout << daftarSiswa[i].nis << " - " << daftarSiswa[i].nama << " - "
                 << daftarSiswa[i].kelas << " - " << daftarSiswa[i].alamat << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan)
        cout << "Data tidak ditemukan\n";
}

void urutkanData()
{
    if (jumlahSiswa == 0)
    {
        cout << "Belum ada data siswa.\n";
        return;
    }

    int pilihan;
    cout << "Urutkan berdasarkan:\n1. Nama\n2. Kelas\nPilih: ";
    cin >> pilihan;

    // Bubble sort
    for (int i = 0; i < jumlahSiswa - 1; i++)
    {
        for (int j = 0; j < jumlahSiswa - i - 1; j++)
        {
            bool tukar = false;
            if (pilihan == 1 && daftarSiswa[j].nama > daftarSiswa[j + 1].nama)
                tukar = true;
            if (pilihan == 2 && daftarSiswa[j].kelas > daftarSiswa[j + 1].kelas)
                tukar = true;

            if (tukar)
            {
                Siswa temp = daftarSiswa[j];
                daftarSiswa[j] = daftarSiswa[j + 1];
                daftarSiswa[j + 1] = temp;
            }
        }
    }
    cout << "Data berhasil diurutkan!\n";
    tampilSiswa();
}