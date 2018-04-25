#include <iostream>
#include "Tiketbioskop.h"
#include "Orang.h"
#include "Kursi.h"

void MainMenu(int &ans){
    cout << " Main Menu : " <<endl;
    cout << " 1.  Registrasi" <<endl;
    cout << " 2.  Register Kursi" <<endl;
    cout << " 3.  Pilih Film" <<endl;
    cout << " 4.  Tampilkan Film" <<endl;
    cout << " 5.  Tampilkan Kursi" <<endl;
    cout << " 6.  Exit" <<endl;
    do{
        cout << " Silakan Pilih Menu Yang Anda Mau[1-6]" <<endl;
        cin>>ans;
    }while(ans > 6 || ans <= 0);

}

///implementasi insertFirst
///Menanmbahkan Orang di List Orang dari depan

void registrasi(list_orang &LO){
    do{
        string R;
        cout << " Registrasi " <<endl;
        register(list_orang &LO)
        cout<<" Data Berhasil Dimasukan"<<endl;

        cout<<endl;
        cout<<" Ingin Registrasi Lagi?[Y/N]"<<endl;
        cin>>R;


    }while(R == Y);


}

void register_kursi(list_kursi &LK){
    do{
        string a,b,R;
        cout << " Registrasi Kursi " <<endl;
        cout << "Masukan Film" <<endl;
        cin >>a;
        cout << "Masukan No Kursi" <<endl;
        cin >>b;
        insert_kursi(b,a,LK)
        cout<<" Data Berhasil Dimasukan"<<endl;

        cin>>R;
    }while(a == Y
}


///Menampilkan Semua Film di Bioskop
void TampilkanSeluruhFilm(list_orang, list_kursi, list_relasi &LO,LK,LR){
    cout << " Menampilkan Semua Film " <<endl;
    Print_AllFilm(LR, LK);
    cout <<endl;
    cout << " Menampilkan semua film selesai " <<endl;
}
///Menampilkan Semua Kursi diBioskop
void TampilkanSeluruhKursi(list_kursi, list_orang, list_relasi &LK,LO,LR)){
    cout << " Menampilkan Semua Kursi " <<endl;
    Print_AllKursi(LK ,LR);
    cout <<endl;
    cout << " Menampilkan semua kursi " <<endl;
}


