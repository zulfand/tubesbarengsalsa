#include "Kursi.h"

adr_kursi search_kursi(string nama , list_kursi LK){

    return NULL;
}


void insert_kursi (string kursi, string film, list_kursi &LK){
    adr_kursi Q = NULL;
//    adr_kursi P = alokasi_kursi(kursi, film);
//    Q = search_kursi(P,LK);
//    if(Q == NULL){
//        if (first_kursi(LK) != NULL){
//            next(P) = first_kursi(LK);
//        }
//        first_kursi(LK) = P;
//    } else {
//        cout<<"Data sudah ada"<<endl;
//    }
}


adr_kursi alokasi_kursi (string kursi, string film){
    adr_kursi P = new elm_list_kursi;
    info_kursi(P).no_kursi = kursi;
    info_kursi(P).film = film;
    next(P) = NULL;
    return P;
}


void Print_AllFilm(list_relasi &LR, list_kursi LK){
    adr_relasi L = first_relasi(LR);
    while(L != NULL){
        L = next(L);
    }
}

void Print_AllKursi(list_kursi  &LK, list_relasi LR){
//    adr_orang L = first_Orang();
//    if( != NULL){
//        Q = first(L);
//        while(Q != NULL){
//            return info(Q);
//            Q = next(Q);
//        }
//    }
}
