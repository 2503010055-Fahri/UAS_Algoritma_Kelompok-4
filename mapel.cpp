#include<iostream>
using namespace std;

struct Mapel
{
    string kode, nama, guru;
};

Mapel daftarMapel[50];
int jumlahMapel = 0;

struct Jadwal
{
    string hari, jam, kelas, mapel;
};

Jadwal daftarJadwal[50];
int jumlahJadwal = 0;

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

// ===== JADWAL =====

void tambahJadwal()
{
    cout << "Hari: ";
    cin >> daftarJadwal[jumlahJadwal].hari;
    cout << "Jam: ";
    cin >> daftarJadwal[jumlahJadwal].jam;
    cout << "Kelas: ";
    cin >> daftarJadwal[jumlahJadwal].kelas;
    cout << "Mapel: ";
    cin >> daftarJadwal[jumlahJadwal].mapel;
    jumlahJadwal++;
    cout << "Data jadwal tersimpan!\n";
}

void tampilJadwal()
{
    if (jumlahJadwal == 0)
    {
        cout << "Belum ada data jadwal.\n";
        return;
    }
    cout << "\nHari\tJam\tKelas\tMapel\n";
    for (int i = 0; i < jumlahJadwal; i++)
    {
        cout << daftarJadwal[i].hari << "\t" << daftarJadwal[i].jam << "\t"
             << daftarJadwal[i].kelas << "\t" << daftarJadwal[i].mapel << endl;
    }
}

void hapusJadwal()
{
    string hariCari, jamCari;
    cout << "Masukkan hari: ";
    cin >> hariCari;
    cout << "Masukkan jam: ";
    cin >> jamCari;
    for (int i = 0; i < jumlahJadwal; i++)
    {
        if (daftarJadwal[i].hari == hariCari && daftarJadwal[i].jam == jamCari)
        {
            for (int j = i; j < jumlahJadwal - 1; j++)
                daftarJadwal[j] = daftarJadwal[j + 1];
            jumlahJadwal--;
            cout << "Data dihapus!\n";
            return;
        }
    }
    cout << "Data tidak ditemukan\n";
}

void menuJadwal()
{
    int pilihan;
    do
    {
        cout << "\n-- Menu Jadwal Pelajaran --\n1. Tambah\n2. Tampil\n3. Hapus\n0. Kembali\nPilih: ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            tambahJadwal();
            break;
        case 2:
            tampilJadwal();
            break;
        case 3:
            hapusJadwal();
            break;
        case 0:
            break;
        default:
            cout << "Pilihan tidak valid\n";
        }
    } while (pilihan != 0);
}
