#include <iostream>
#ifndef KURSI_H_INCLUDED
#define KURSI_H_INCLUDED

struct kursi{
    string no_kursi;
    string film;
};
typedef struct elm_list_kursi *adr_kursi;

struct list_kursi{
     adr_kursi first_kursi;
};


struct elm_list_kursi{
    kursi info_kursi;
    adr_kursi next_kursi;
};

void insert_kursi (string kursi, string film, list_kursi &LK);
void adr_kursi alokasi_kursi (string a);
void Print_AllFilm(list_relasi, list_kursi &LR, LK);
void Print_AllKursi(List_kursi, list_relasi &LK, LR);

#endif // KURSI_H_INCLUDED
