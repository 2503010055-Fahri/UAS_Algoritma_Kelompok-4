#include<iostream>
using namespace std;

struct Siswa
{
    string nis, nama, kelas, alamat;
};

Siswa daftarSiswa[100];
int jumlahSiswa = 0;

void tambahSiswa()
{
    cout << "NIS: ";
    cin >> daftarSiswa[jumlahSiswa].nis;
    cout << "Nama: ";
    cin >> daftarSiswa[jumlahSiswa].nama;
    cout << "Kelas: ";
    cin >> daftarSiswa[jumlahSiswa].kelas;
    cout << "Alamat: ";
    cin >> daftarSiswa[jumlahSiswa].alamat;
    jumlahSiswa++;
    cout << "Data tersimpan!\n";
}

void tampilSiswa()
{
    if (jumlahSiswa == 0)
    {
        cout << "Belum ada data siswa.\n";
        return;
    }
    cout << "\nNIS\tNama\tKelas\tAlamat\n";
    for (int i = 0; i < jumlahSiswa; i++)
    {
        cout << daftarSiswa[i].nis << "\t" << daftarSiswa[i].nama << "\t"
             << daftarSiswa[i].kelas << "\t" << daftarSiswa[i].alamat << endl;
    }
}

void hapusSiswa()
{
    string nisCari;
    cout << "Masukkan NIS yang dihapus: ";
    cin >> nisCari;
    for (int i = 0; i < jumlahSiswa; i++)
    {
        if (daftarSiswa[i].nis == nisCari)
        {
            for (int j = i; j < jumlahSiswa - 1; j++)
                daftarSiswa[j] = daftarSiswa[j + 1];
            jumlahSiswa--;
            cout << "Data dihapus!\n";
            return;
        }
    }
    cout << "Data tidak ditemukan\n";
}

void menuSiswa()
{
    int pilihan;
    do
    {
        cout << "\n-- Menu Data Siswa --\n1. Tambah\n2. Tampil\n3. Hapus\n0. Kembali\nPilih: ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            tambahSiswa();
            break;
        case 2:
            tampilSiswa();
            break;
        case 3:
            hapusSiswa();
            break;
        case 0:
            break;
        default:
            cout << "Pilihan tidak valid\n";
        }
    } while (pilihan != 0);
}