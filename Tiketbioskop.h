#include <iostream>
#ifndef TIKETBIOSKOP_H_INCLUDED
#define TIKETBIOSKOP_H_INCLUDED
#include <cstdlib>
#define info(P) P -> info
#define next(P) P -> next
#define prev(P) P -> prev

typedef elm_list_relasi* adr_relasi;

struct elm_list_relasi{
    adr_relasi prev_relasi;
    adr_relasi next_relasi;
    adr_orang info_parent;
    adr_kursi info_child;
};

struct list_relasi{
    adr_relasi first_relasi ;
    adr_relasi last_relasi;
};

void register ( list_orang & LO)
void adr_orang alokasi_orang ( string a; string b; string c;)
void insert_orang (adr_orang P;list_orang & LO)
void insert_kursi (a:string;list_kursi&LK)
void adr_kursi alokasi_kursi (a:string)
void adr_relasi alokasi_relasi (P:adr_orang;Q:adr_kursi)
void insert_relasi (string nama; string kursi; list_orang&LO; list_kursi&LK; list_relasi&LR)
void adr_relasi search_relasi_kursi (adr_kursi Q; list_relasi &R)
void insert_first_relasi (adr_relasi R;list_relasi &LR)



#endif // TIKETBIOSKOP_H_INCLUDED
