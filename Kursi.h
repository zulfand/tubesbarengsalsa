#ifndef KURSI_H_INCLUDED
#define KURSI_H_INCLUDED

#include "Tiketbioskop.h"


void insert_kursi (string kursi, string film, list_kursi &LK);
adr_kursi alokasi_kursi (string kursi, string film);
void Print_AllFilm(list_relasi &LR, list_kursi LK);
void Print_AllKursi(list_kursi &LK, list_relasi LR);

#endif // KURSI_H_INCLUDED
