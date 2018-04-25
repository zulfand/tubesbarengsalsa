#include <iostream>
#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED
#define first_Orang(LO) LO -> first_Orang

struct orang{
    string nama;
    string email;
    string noHp;
};

typedef struct elm_list_orang *adr_orang;

struct elm_list_orang{
    orang info_orang;
    adr_orang next_orang;
};

struct list_orang{
    adr_orang first_orang;
};

void register ( list_orang & LO)
void adr_orang alokasi_orang ( string a; string b; string c;)
void insert_orang (string a, string b, string c, list_orang & LO)

#endif // ORANG_H_INCLUDED
