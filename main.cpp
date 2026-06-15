#include <iostream>
#include <string>

using namespace std;

// 1. STRUKTUR LINKED LIST MATA PELAJARAN
struct Mapel
{
    string kode;
    string nama;
    string guru;
    Mapel* next; 
};

// Head global untuk menampung Linked List Mapel
Mapel* headMapel = NULL; 

// ===== FUNGSI MAPEL =====

void tambahMapel()
{
    Mapel* nodeBaru = new Mapel();
    
    cout << "Kode Mapel: ";
    cin >> nodeBaru->kode;
    cout << "Nama Mapel: ";
    cin >> nodeBaru->nama;
    cout << "Nama Guru: ";
    cin >> nodeBaru->guru;
    
    nodeBaru->next = headMapel;
    headMapel = nodeBaru;
    
    cout << "Data mapel tersimpan!\n";
}

void tampilkanMapel()
{
    if (headMapel == NULL)
    {
        cout << "Belum ada data mapel.\n";
        return;
    }
    
    cout << "\nKode\tNama Mapel\tGuru\n";
    Mapel* temp = headMapel; 
    while (temp != NULL)
    {
        cout << temp->kode << "\t" << temp->nama << "\t" << temp->guru << endl;
        temp = temp->next; 
    }
}

void hapusMapel()
{
    if (headMapel == NULL) {
        cout << "Belum ada data mapel.\n";
        return;
    }

    string kodeCari;
    cout << "Masukkan kode mapel yang dihapus: ";
    cin >> kodeCari;

    Mapel* temp = headMapel;
    Mapel* prev = NULL;

    if (temp != NULL && temp->kode == kodeCari) {
        headMapel = temp->next; 
        delete temp;            
        cout << "Data dihapus!\n";
        return;
    }

    while (temp != NULL && temp->kode != kodeCari) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Data tidak ditemukan\n";
        return;
    }

    prev->next = temp->next;
    delete temp; 
    cout << "Data dihapus!\n";
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
                tampilkanMapel();
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

// ===== FUNGSI UTAMA =====
int main()
{
    // Memanggil fungsi menu utama mapel
    menuMapel();
    
    return 0;
}
