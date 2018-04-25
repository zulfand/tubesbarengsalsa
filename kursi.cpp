#include "Kursi.h"

void insert_kursi (string kursi, string film, list_kursi&LK){
    adr_kursi P = alokasi_kursi(kursi, film);
    Q = search_kursi(P,LO);
    if(Q == NULL){
        if (first_kursi(LK) != NULL){
            next(P) = first_kursi(LK);
        }
        first_kursi(LK) = P;
    } else {
        cout<<"Data sudah ada"<<endl;
    }
}


adr_kursi alokasi_kursi (string kursi, string film){
    adr_kursi P = new elm_list_kursi;
    info_kursi(P).no_kursi = kursi;
    info_kursi(P).film = film;
    next(P) = NULL;
    return P;
}


void Print_AllFilm(list_relasi, list_kursi &LR, LK){
    L = list_relasi;
    if(first(L) != NULL){
        Q = first(L);
        while(Q != NULL){
            return info(Q);
            Q = next(Q);
        }
    }
}

void Print_AllKursi(List_kursi, list_relasi &LK, LR){
    L = list_orang;
    if(first(L) != NULL){
        Q = first(L);
        while(Q != NULL){
            return info(Q);
            Q = next(Q);
        }
    }
}
