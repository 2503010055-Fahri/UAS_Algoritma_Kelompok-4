#include <iostream>
using namespace std;

struct Nilai{
	 string NIS, Mapel;
	 float Nilai; 
	
};

Nilai daftarNilai[100];
int jumlahNilai = 0;

void inputNilai(){
	cout << "NIS: ";
    cin >> daftarNilai[jumlahNilai].NIS;
    cout << "Mapel: ";
    cin >> daftarNilai[jumlahNilai].Mapel;
    cout << "Nilai: ";
    cin >> daftarNilai[jumlahNilai].Nilai;
    jumlahNilai++;
    cout << "Nilai tersimpan!\n";
    
}


void LihatNilai(){
	
	if (jumlahNilai == 0){
		cout<<"Belum ada jumlah Nilai.\n";
		return;
	}
	
	cout<<"\n=======================================\t"<<endl;
	cout<<"|NIS|\t\t|Mapel|\t\t|Nilai|\t"<<endl;
	cout<<"---------------------------------------\t"<<endl;
    for (int i = 0; i < jumlahNilai; i++){
    	cout <<daftarNilai[i].NIS << "\t\t" << daftarNilai[i].Mapel <<"\t\t"<< daftarNilai[i].Nilai << endl;
	}
}


void HapusNilai(){
	string nisCari, kodeCari;
    cout << "Masukkan NIS: ";
    cin >> nisCari;
    cout << "Masukkan Mapel: ";
    cin >> kodeCari;
    
    for(int i = 0; i < jumlahNilai; i++){
    	if (daftarNilai[i].NIS == nisCari && daftarNilai[i].Mapel == kodeCari){
    		for (int n = i; n < jumlahNilai - 1; n++){
    			daftarNilai[n] = daftarNilai[n + 1];
			} 
			jumlahNilai--;
			
		}
		cout << "Data dihapus!\n";
            return;
	}
	
	cout << "Data tidak ditemukan\n";
}

void MenuNilai(){
	int pilihan;
	do {
		cout << "\n-- Menu Nilai --\n1. Input Nilai\n2. Lihat Nilai\n3. Hapus Nilai\n0. Kembali\nPilih: ";
        cin >> pilihan;
        switch(pilihan){case 1:
            inputNilai();
            break;
        case 2:
            LihatNilai();
            break;
        case 3:
            HapusNilai();
            break;
        case 0:
            break;
        default:
            cout << "Pilihan tidak valid\n";
        	
		}
	} while (pilihan != 0);
	
}