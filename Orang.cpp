#include "Orang.h"


void register ( list_orang & LO){
    string a,b,c;
    cout << "Masukan Nama" <<endl;
    cin >>a;
    cout << "Masukan Email" <<endl;
    cin >>b;
    cout << "Masukan NoHp" <<endl;
    cin >>c;
    insert_orang(a,b,c,LO)
}


void adr_orang alokasi_orang ( string a; string b; string c;){
    adr_orang P = new elm_list_orang;
    info(P).Nama = a;
    info(P).Email = b;
    info(P).NoHp = c;
    next(P) = NULL;
    return P;
}


void insert_orang (string a, string b, string c, list_orang & LO){
    adr_orang P = alokasi_orang(a,b,c);
    Q = search_orang(P,LO);
    if(Q == NULL){
    }
        if (first_orang(LO) == NULL){
        first_orang(LO) = P;
        next(P) = P;
        }else{
            next(P) = first_orang(LO);
            Q = first_orang(LO);
            while (next(Q) != first_orang(LO)){
                    Q = next(Q);
        }
        next(Q) = P;
        first_orang(LO) = P;
    }
    else{
        cout<<" Data Sudah Ada"<<endl;
    }
}

void deletelastOrg(List_orang &LO){
    P = search(List_orang,data);
    P = first(list_orang);
    while(next(P) != NULL){
        P = next(P);
    Q = next(P);
    next(P) = NULL;
    }
}

void deletefirstOrg(List_orang &LO){
    P = search(List_orang,data);
    P = first(list_orang);
    first(list_orang) = next(list_orang);
    next(list_orang) = NULL;
    cout<<"Info(list_orang)"<<endl;
}

void deleteafterOrg (List_orang &LO) {
    P = search(List_orang,data);
    if(P == first(list_orang)){
        deletefirstOrg(List_orang,Q);
    }else if (next(P) == NULL){
        deleteafterOrg(list_orang,Q);
    }else
        Z == first(list_orang);
        while(next(Z) != P){
            Z = next(P);
        deleteafterOrg(list_orang, Z, P);
        }
}


