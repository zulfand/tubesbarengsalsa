#include <iostream>
#ifndef KURSI_H_INCLUDED
#define KURSI_H_INCLUDED

#include "Tiketbioskop.h"

using namespace std;

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
adr_kursi alokasi_kursi (string kursi, string film);
void Print_AllFilm(list_relasi &LR, list_kursi LK);
void Print_AllKursi(List_kursi &LK, list_relasi LR);

#endif // KURSI_H_INCLUDED
