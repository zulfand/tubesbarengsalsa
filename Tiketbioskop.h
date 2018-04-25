
#ifndef TIKETBIOSKOP_H_INCLUDED
#define TIKETBIOSKOP_H_INCLUDED
#include <cstdlib>

#include <iostream>

#include "Orang.h"

#define info_kursi(p) p->info_kursi
#define info(P) P -> info
#define next(P) P -> next
#define prev(P) P -> prev
#define info_parent(p) p -> info_parent
#define info_child(p) p -> info_child
#define first_relasi(p) p.first_relasi
#define last_relasi(p) p.last_relasi

using namespace std;

typedef struct elm_list_relasi* adr_relasi;
typedef struct elm_list_kursi *adr_kursi;

struct elm_list_relasi{
    adr_relasi prev;
    adr_relasi next;
    adr_orang info_parent;
    adr_kursi info_child;
};

struct list_relasi{
    adr_relasi first_relasi ;
    adr_relasi last_relasi;
};


struct kursi{
    string no_kursi;
    string film;
};



struct list_kursi{
     adr_kursi first_kursi;
};


struct elm_list_kursi{
    kursi info_kursi;
    adr_kursi next;
};



adr_relasi alokasi_relasi (adr_orang P, adr_kursi Q);
void insert_relasi (string nama, string kursi, list_orang&LO, list_kursi&LK, list_relasi&LR);
adr_relasi search_relasi_kursi (adr_kursi Q, list_relasi &R);
void insert_first_relasi (adr_relasi R, list_relasi &LR);
void delete_first_relasi (adr_relasi R, list_relasi &LR);
void DealocateRelasi (adr_relasi &LR);





#endif // TIKETBIOSKOP_H_INCLUDED
