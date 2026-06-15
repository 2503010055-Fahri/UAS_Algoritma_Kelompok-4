#include<iostream>
using namespace std;

struct Mapel
{
    string kode, nama, guru;
};

Mapel daftarMapel[50];
int jumlahMapel = 0;


// ===== MAPEL =====

void tambahMapel()
{
    cout << "Kode Mapel: ";
    cin >> daftarMapel[jumlahMapel].kode;
    cout << "Nama Mapel: ";
    cin >> daftarMapel[jumlahMapel].nama;
    cout << "Nama Guru: ";
    cin >> daftarMapel[jumlahMapel].guru;
    jumlahMapel++;
    cout << "Data mapel tersimpan!\n";
}

void tampilMapel()
{
    if (jumlahMapel == 0)
    {
        cout << "Belum ada data mapel.\n";
        return;
    }
    cout << "\nKode\tNama Mapel\tGuru\n";
    for (int i = 0; i < jumlahMapel; i++)
    {
        cout << daftarMapel[i].kode << "\t" << daftarMapel[i].nama << "\t"
             << daftarMapel[i].guru << endl;
    }
}

void hapusMapel()
{
    string kodeCari;
    cout << "Masukkan kode mapel yang dihapus: ";
    cin >> kodeCari;
    for (int i = 0; i < jumlahMapel; i++)
    {
        if (daftarMapel[i].kode == kodeCari)
        {
            for (int j = i; j < jumlahMapel - 1; j++)
                daftarMapel[j] = daftarMapel[j + 1];
            jumlahMapel--;
            cout << "Data dihapus!\n";
            return;
        }
    }
    cout << "Data tidak ditemukan\n";
}

void menuMapel()
{
    int pilihan;
    do
    {
        cout << "\n-- Menu Data Mapel --\n1. Tambah\n2. Tampil\n3. Hapus\n0. Kembali\nPilih: ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            tambahMapel();
            break;
        case 2:
            tampilMapel();
            break;
        case 3:
            hapusMapel();
            break;
        case 0:
            break;
        default:
            cout << "Pilihan tidak valid\n";
        }
    } while (pilihan != 0);
}
