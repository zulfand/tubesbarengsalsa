#include "Tiketbioskop.h"

adr_relasi alokasi_relasi (adr_orang P, adr_kursi Q){
    adr_relasi R = new elm_list_relasi;
    info_parent(R) = P;
    info_child(R) = Q;
    next(R) = NULL;
    prev(R) = NULL;
    return R;
}

void insert_relasi (string nama, string kursi, list_orang&LO, list_kursi&LK, list_relasi&LR){
    adr_orang P ;
    adr_kursi Q;
    adr_relasi R;
    //P = search_orang(nama,LO);
    //Q = search_kursi(kursi,LK);
        if ((P != NULL)&&(Q!=NULL)){
            R = search_relasi_kursi(Q,LR);
            if (R == NULL){
                R = alokasi_relasi(P,Q);
                insert_first_relasi(R,LR);
            }else{
                cout<< "Kursi Telah Dibooking" <<endl;
            }
        }
}


adr_relasi search_relasi_kursi (adr_kursi Q, list_relasi &R){
    adr_relasi P;
    P = first_relasi(R);
    while((P != NULL) && (info_child(P) != Q)) {
        P = next(P);

    }
    return P;
}

void insert_first_relasi (adr_relasi R, list_relasi &LR){
    if(first_relasi(LR) != NULL) {
        next(R) = first_relasi(LR);
        prev(first_relasi(LR)) = R;
    }
    first_relasi(LR) = R;
}

void delete_first_relasi (adr_relasi R, list_relasi &LR){
    if(R == NULL){
        return;
    }
    adr_relasi q = first_relasi(LR);
    while(q != R){
        q = next(q);
    }
    if(next(q) == NULL){
        ///jika data yg dihapus adalah elm terakhir
        adr_relasi z = prev(q);
        if(q != first_relasi(LR)){
            next(z) = NULL;
            prev(q) = NULL;
            last_relasi(LR) = z;
        }else{
            first_relasi(LR) = NULL;
            last_relasi(LR) = NULL;
        }

    }else{
        if(q == first_relasi(LR)){
            ///jika dia elm pertama
            first_relasi(LR) = next(q);
            next(q) = NULL;
            prev(first_relasi(LR)) = NULL;
        }else{
            ///jika dia bukan elm pertama
            adr_relasi z = prev(q);
            next(z) = next(q);
            prev(next(q)) = z;
            next(q) = NULL;
            prev(q) = NULL;

        }
    }
    q = NULL;
    DealocateRelasi(R);
}



void DealocateRelasi (adr_relasi &LR){
    next(LR) = NULL;
    prev(LR) = NULL;
    delete(LR);
    LR = NULL;
}

